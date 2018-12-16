#pragma once

#include "node/include/types.h"
#include "node/gen-cpp2/Node.h"
#include "node/gen-cpp2/node_constants.h"

#include <string>
#include <vector>
#include <mutex>
#include "database/include/database_provider.h"
#include "peer.h"

namespace node {

/*
 * Main class providing Node functionality
 */
class Node : public cpp2::NodeSvIf {
public:

  Node(const std::string& host, int port);

  /**
   * Thrift API
   */
  // Called by outgoing peers to ask this node for a full transaction.
  void send_transaction(
      SendTransactionResponse& response, 
      std::unique_ptr<SendTransactionRequest> request) override;

  // Called by incoming peers to notify this node about the new transaction.
  void notify_new_inventory_hash(
      NotifyNewInventoryResponse& response,
      std::unique_ptr<NotifyNewInventoryRequest> request) override;
 
  // Used by other nodes to ask current node for new peers to discover network.
  void get_peer(
      GetPeerInfoResponse& response,
      std::unique_ptr<GetPeerInfoRequest> request) override;

private: 
  bool verify_transaction(const Transaction& txn) const;

  // Asks given peer for transaction with given hash, then verifies it,
  // adds to database and notifies all the peers about it.
  void ask_for_transaction(const Peer& peer, const std::string& hash);

  // Sends hash of transaction to all the outgoing peers.
  void propagate_transaction(const Transaction& txn);

public:
    std::string host_;
    int port_;

    // NOTE(martun): needed to make these values static,
    // Make sure to lock peers_mutex_ when accessing. 
    static std::vector<Peer> incoming_peers_;
    static std::vector<Peer> outgoing_peers_;

    // Lock when accessing the peers info.
    static std::mutex peers_mutex_;

    // Pointer to the database.
    std::unique_ptr<DatabaseProvider> db_;

};

} // namespace node
