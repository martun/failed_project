#pragma once

#include <string>

namespace node {

/*
 * Class to represent peers.
 */
class Peer {
public:
  Peer(const std::string& host, int port, bool is_connection_incoming);

public: 
  std::string host_;
  int port_;

  // If set to true, connection is incoming, if not
  // then outgoing.
  bool is_connection_incoming_;
};

} // namespace node
