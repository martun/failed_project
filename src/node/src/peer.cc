#include ""

namespace node {

Peer::Peer(const std::string& host, int port, bool is_connection_incoming)
    : host_(host)
    , port_(port)
    , is_connection_incoming_(is_connection_incoming)
{
}

} // namespace node
