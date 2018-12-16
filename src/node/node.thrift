namespace cpp node

const byte ERR_OK = 0;
const byte ERR_SERVER_ERROR = 13;

struct ErrorStruct {
  1:byte code = ERR_OK,
  2:string message
}

struct Transaction {
  1:string sending_wallet_id,
  2:string receiving_wallet_id,
  3:i64 amount,
  4:i64 timestamp
}

struct SendTransactionRequest {
  1:string txn_hash,
}

struct SendTransactionResponse {
  1:Transaction txn,
  2:ErrorStruct error
}

struct NotifyNewInventoryRequest {
  1:string inv_item_hash,
}

struct NotifyNewInventoryResponse {
  1:ErrorStruct error
}

struct GetPeerInfoRequest {
  1:string requesting_host,
  2:i32 requesting_port,
}

struct GetPeerInfoResponse {
  1:string host,
  2:i32 port,
  3:i32 protocol_version
  4:ErrorStruct error
}

service Node {
  // Called by incoming peers to notify this node about the new transaction.
  NotifyNewInventoryResponse notify_new_inventory_hash(1:NotifyNewInventoryRequest request);

  // Called by outgoing peers to ask this node for a full transaction.
  SendTransactionResponse send_transaction(1:SendTransactionRequest request);

  // Used by other nodes to ask current node for new peers to discover network. 
  GetPeerInfoResponse get_peer(1:GetPeerInfoRequest request);

}

