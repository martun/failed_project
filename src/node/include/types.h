#pragma once

#include <cstdint>
#include <type_traits>

#include "gen-cpp2/node_constants.h"
#include "gen-cpp2/node_types.h"
#include "gen-cpp2/node_types_custom_protocol.h"
#include "gen-cpp2/node_constants.h"

using node::cpp2::ErrorStruct;

using node::cpp2::Transaction;
using node::cpp2::NotifyNewInventoryRequest;
using node::cpp2::NotifyNewInventoryResponse;

using node::cpp2::SendTransactionRequest;
using node::cpp2::SendTransactionResponse;

using node::cpp2::GetPeerInfoRequest;
using node::cpp2::GetPeerInfoResponse;

using node::cpp2::node_constants;
