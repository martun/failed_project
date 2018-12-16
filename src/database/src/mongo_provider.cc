#include "mongo_provider.h"
#include <thrift/lib/cpp/transport/TBufferTransports.h>
#include <thrift/lib/cpp/transport/TVirtualTransport.h>
#include <thrift/lib/cpp/protocol/TJSONProtocol.h>
#include <node/include/types.h>
#include <sstream>
#include <optional>

// We serialize some thrift objects to read/write them to the db.
using namespace apache::thrift;
using namespace apache::thrift::transport;
using namespace apache::thrift::protocol;

MongoProvider::MongoProvider(std::string host, int port, std::string db_name) {
    std::stringstream ss;
    ss << "mongodb://" << host << ":" << port;
    mongocxx::uri uri(ss.str());
    client_.reset(new mongocxx::client(uri));
    db_ = (*client_)[db_name];
}

bool MongoProvider::get_account_balance(
    const std::string& wallet_id,
    int64_t& balance_out) const {
    mongocxx::collection collection = db_["balance_collection"];
    bsoncxx::stdx::optional<bsoncxx::document::value> doc = collection.find_one(
        document{} << "wallet_id" << wallet_id << finalize);
    if (!doc)
       return false;
    bsoncxx::document::view view = doc->view(); 
    balance_out = view["balance"].get_int64();
    return true;
}

void MongoProvider::set_account_balance(
    const std::string& wallet_id,
    int64_t new_balance) const {
    bsoncxx::builder::stream::document document;
    mongocxx::collection collection = db_["balance_collection"];
    document
        << "wallet_id" << wallet_id
        << "balance" << new_balance 
        << finalize;
    collection.insert_one(document.view());
}

bool MongoProvider::has_transaction(const std::string& hash) const {
    // Change this to just checking later.
    Transaction txn_out;
    return load_transaction(hash, txn_out);
}

bool MongoProvider::load_transaction(const std::string& hash, Transaction& txn_out) const {
    mongocxx::collection collection = db_["transactions_collection"];
    bsoncxx::stdx::optional<bsoncxx::document::value> doc = collection.find_one(
        document{} << "hash" << hash << finalize);
    if (!doc)
       return false;
    bsoncxx::document::view view = doc->view(); 
    std::string txn_out_str = view["transaction"].get_utf8().value.to_string();
    std::shared_ptr<TMemoryBuffer> transportIn(new TMemoryBuffer());
    transportIn->write((const uint8_t*)&txn_out_str[0], txn_out_str.size());

    std::shared_ptr<TJSONProtocol> protocolIn(new TJSONProtocol(transportIn));
    // Calling read() here caused a compilation error, because 
    // TJSONProtocol does not have function getCurrentPosition().
    // Probably some version incompatibility.
    // On the other hand readNoXfer was generated private, so now we need to manually set
    // it to public, before we figure out how to match all the versions of used fbthrift
    // dependencies.
    txn_out.read(protocolIn.get());
    return true;
}

bool MongoProvider::save_transaction(const std::string& hash, const Transaction& txn) const {
    bsoncxx::builder::stream::document document;
    mongocxx::collection collection = db_["transactions_collection"];
    // Serialize the thrift transaction object.
    std::shared_ptr<TMemoryBuffer> transportOut(new TMemoryBuffer());
    std::shared_ptr<TJSONProtocol> protocolOut(new TJSONProtocol(transportOut));
    txn.write(protocolOut.get());
    std::string serialized_txn = transportOut->getBufferAsString();
    document
        << "hash" << hash
        << "transaction" << serialized_txn
        << finalize;
    collection.insert_one(document.view());
// TODO(martun): check if it existed later, change insert to update.
return true;
}

