#include <cmath>

#include <glog/logging.h>

#include "node.h"
#include "database/include/mongo_provider.h"

namespace node {

Node::Node(const std::string& host, int port)
    : host_(host)
    , port_(port)
    , db_(new MongoProvider())
{
}

void Node::send_transaction(
        SendTransactionResponse& response, 
        std::unique_ptr<SendTransactionRequest> request) {
  try {
    LOG(INFO) << "Node::send_transaction() called.\n"
              << "request = {\n"
              << "  txn_hash:    " << request->txn_hash << ",\n"
              << "}";
    // Try to load transaction from the database.
    Transaction txn;
    if (db_->load_transaction(request->get_txn_hash(), txn)) {
        response.set_txn(txn);
    } else {
        ErrorStruct error;
        error.set_code(node::cpp2::node_constants::ERR_SERVER_ERROR());
        error.set_message("Requested transaction not in the database.");
        response.set_error(error);
    }
    LOG(INFO) << "Node::send_transaction() completed";
    google::FlushLogFiles(google::GLOG_INFO);
  } catch (const std::exception& exc) {
    response.error.code = node_constants::ERR_SERVER_ERROR();
    response.error.message = exc.what();
  } catch (...) {
    response.error.code = node_constants::ERR_SERVER_ERROR();
    response.error.message = "<exception of unknown type>";
  }
}

void Node::notify_new_inventory_hash(
        NotifyNewInventoryResponse& response, 
        std::unique_ptr<NotifyNewInventoryRequest> request) {
  try {
    LOG(INFO) << "Node::notify_new_inventory_hash() called.\n"
              << "request = {\n"
              << "  inv_item_hash:    " << request->inv_item_hash << ",\n"
              << "}";
    if (!db_->has_transaction(request->get_inv_item_hash())) {
      // Need to know the IP address here.
      //auto client = getClient(); 
      //ask_for_transaction(request->get_inv_item_hash()); 
    }
    LOG(INFO) << "Node::notify_new_inventory_hash() completed";
    google::FlushLogFiles(google::GLOG_INFO);
  } catch (const std::exception& exc) {
    response.error.code = node_constants::ERR_SERVER_ERROR();
    response.error.message = exc.what();
  } catch (...) {
    response.error.code = node_constants::ERR_SERVER_ERROR();
    response.error.message = "<exception of unknown type>";
  }
}

void Node::get_peer(
        GetPeerInfoResponse& response, 
        std::unique_ptr<GetPeerInfoRequest> request) {
  try {
    LOG(INFO) << "Node::get_peer() called.\n"
              << "request = {\n"
              << "  requesting_host:    " << request->requesting_host << ",\n"
              << "}";
    // TODO: return one of our outgoing peers randomly.
    LOG(INFO) << "Node::notify_new_inventory_hash() completed";
    google::FlushLogFiles(google::GLOG_INFO);
  } catch (const std::exception& exc) {
    response.error.code = node_constants::ERR_SERVER_ERROR();
    response.error.message = exc.what();
  } catch (...) {
    response.error.code = node_constants::ERR_SERVER_ERROR();
    response.error.message = "<exception of unknown type>";
  }
}

} // namespace node 
