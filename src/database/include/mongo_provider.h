#pragma once

#include <string>
#include <memory>
#include "database_provider.h"
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/json.hpp>
#include <mongocxx/stdx.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>

using bsoncxx::builder::stream::close_array;
using bsoncxx::builder::stream::close_document;
using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::finalize;
using bsoncxx::builder::stream::open_array;
using bsoncxx::builder::stream::open_document;

// Class which provides access to Mongo database, 
// in which we want to store the wallet account balances..
class MongoProvider : public DatabaseProvider {
public:
    MongoProvider(std::string host = "localhost", 
                  int port = 27017, 
                  std::string db_name="blockchain_db");

    /*
     * \param[in] wallet_id Address of the wallet to look for.
     * \param[out] balance_out balance of the given wallet.
     * Returns true, if the balance of given wallet was found, otherwise returns false.
     */
    bool get_account_balance(const std::string& wallet_id, int64_t& balance_out) const override;
    void set_account_balance(const std::string& wallet_id, int64_t new_balance) const override;

    // Loads transaction from database, returns true if found.
    bool load_transaction(const std::string& hash, Transaction& txn_out) const override;

    // Returns false, if a transaction with given hash already exists.
    bool save_transaction(const std::string& hash, const Transaction& txn) const override;

    // Checks if we have the given transaction in our database.
    bool has_transaction(const std::string& hash) const override;

private:
    mongocxx::instance inst_;
    std::unique_ptr<mongocxx::client> client_;
    mongocxx::database db_;

};

