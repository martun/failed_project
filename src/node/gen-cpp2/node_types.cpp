/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "node/gen-cpp2/node_types.h"
#include "node/gen-cpp2/node_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "node/gen-cpp2/node_data.h"

namespace node { namespace cpp2 {

ErrorStruct::ErrorStruct(apache::thrift::FragileConstructor, int8_t code__arg, std::string message__arg) :
    code(std::move(code__arg)),
    message(std::move(message__arg)) {
  __isset.code = true;
  __isset.message = true;
}

void ErrorStruct::__clear() {
  // clear all fields
  code = static_cast<int8_t>(0);
  message = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset = {};
}

bool ErrorStruct::operator==(const ErrorStruct& rhs) const {
  if (!((code == rhs.code))) {
    return false;
  }
  if (!((message == rhs.message))) {
    return false;
  }
  return true;
}

void ErrorStruct::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "code") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_BYTE;
  }
  else if (_fname == "message") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}

void swap(ErrorStruct& a, ErrorStruct& b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

template void ErrorStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ErrorStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ErrorStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ErrorStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ErrorStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ErrorStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ErrorStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ErrorStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
namespace node { namespace cpp2 {

Transaction::Transaction(apache::thrift::FragileConstructor, std::string sending_wallet_id__arg, std::string receiving_wallet_id__arg, int64_t amount__arg, int64_t timestamp__arg) :
    sending_wallet_id(std::move(sending_wallet_id__arg)),
    receiving_wallet_id(std::move(receiving_wallet_id__arg)),
    amount(std::move(amount__arg)),
    timestamp(std::move(timestamp__arg)) {
  __isset.sending_wallet_id = true;
  __isset.receiving_wallet_id = true;
  __isset.amount = true;
  __isset.timestamp = true;
}

void Transaction::__clear() {
  // clear all fields
  sending_wallet_id = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  receiving_wallet_id = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  amount = 0;
  timestamp = 0;
  __isset = {};
}

bool Transaction::operator==(const Transaction& rhs) const {
  if (!((sending_wallet_id == rhs.sending_wallet_id))) {
    return false;
  }
  if (!((receiving_wallet_id == rhs.receiving_wallet_id))) {
    return false;
  }
  if (!((amount == rhs.amount))) {
    return false;
  }
  if (!((timestamp == rhs.timestamp))) {
    return false;
  }
  return true;
}

void Transaction::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "sending_wallet_id") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "receiving_wallet_id") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "amount") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "timestamp") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_I64;
  }
}

void swap(Transaction& a, Transaction& b) {
  using ::std::swap;
  swap(a.sending_wallet_id, b.sending_wallet_id);
  swap(a.receiving_wallet_id, b.receiving_wallet_id);
  swap(a.amount, b.amount);
  swap(a.timestamp, b.timestamp);
  swap(a.__isset, b.__isset);
}

template void Transaction::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Transaction::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Transaction::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Transaction::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Transaction::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Transaction::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Transaction::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Transaction::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
namespace node { namespace cpp2 {

SendTransactionRequest::SendTransactionRequest(apache::thrift::FragileConstructor, std::string txn_hash__arg) :
    txn_hash(std::move(txn_hash__arg)) {
  __isset.txn_hash = true;
}

void SendTransactionRequest::__clear() {
  // clear all fields
  txn_hash = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset = {};
}

bool SendTransactionRequest::operator==(const SendTransactionRequest& rhs) const {
  if (!((txn_hash == rhs.txn_hash))) {
    return false;
  }
  return true;
}

void SendTransactionRequest::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "txn_hash") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}

void swap(SendTransactionRequest& a, SendTransactionRequest& b) {
  using ::std::swap;
  swap(a.txn_hash, b.txn_hash);
  swap(a.__isset, b.__isset);
}

template void SendTransactionRequest::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SendTransactionRequest::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SendTransactionRequest::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SendTransactionRequest::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SendTransactionRequest::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SendTransactionRequest::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SendTransactionRequest::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SendTransactionRequest::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
namespace node { namespace cpp2 {

SendTransactionResponse::SendTransactionResponse(apache::thrift::FragileConstructor,  ::node::cpp2::Transaction txn__arg,  ::node::cpp2::ErrorStruct error__arg) :
    txn(std::move(txn__arg)),
    error(std::move(error__arg)) {
  __isset.txn = true;
  __isset.error = true;
}

void SendTransactionResponse::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::node::cpp2::Transaction>::clear(&txn);
  ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::clear(&error);
  __isset = {};
}

bool SendTransactionResponse::operator==(const SendTransactionResponse& rhs) const {
  if (!((txn == rhs.txn))) {
    return false;
  }
  if (!((error == rhs.error))) {
    return false;
  }
  return true;
}

const  ::node::cpp2::Transaction& SendTransactionResponse::get_txn() const& {
  return txn;
}

 ::node::cpp2::Transaction SendTransactionResponse::get_txn() && {
  return std::move(txn);
}

const  ::node::cpp2::ErrorStruct& SendTransactionResponse::get_error() const& {
  return error;
}

 ::node::cpp2::ErrorStruct SendTransactionResponse::get_error() && {
  return std::move(error);
}

void SendTransactionResponse::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "txn") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
  else if (_fname == "error") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

void swap(SendTransactionResponse& a, SendTransactionResponse& b) {
  using ::std::swap;
  swap(a.txn, b.txn);
  swap(a.error, b.error);
  swap(a.__isset, b.__isset);
}

template void SendTransactionResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SendTransactionResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SendTransactionResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SendTransactionResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SendTransactionResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SendTransactionResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SendTransactionResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SendTransactionResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
namespace node { namespace cpp2 {

NotifyNewInventoryRequest::NotifyNewInventoryRequest(apache::thrift::FragileConstructor, std::string inv_item_hash__arg) :
    inv_item_hash(std::move(inv_item_hash__arg)) {
  __isset.inv_item_hash = true;
}

void NotifyNewInventoryRequest::__clear() {
  // clear all fields
  inv_item_hash = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset = {};
}

bool NotifyNewInventoryRequest::operator==(const NotifyNewInventoryRequest& rhs) const {
  if (!((inv_item_hash == rhs.inv_item_hash))) {
    return false;
  }
  return true;
}

void NotifyNewInventoryRequest::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "inv_item_hash") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}

void swap(NotifyNewInventoryRequest& a, NotifyNewInventoryRequest& b) {
  using ::std::swap;
  swap(a.inv_item_hash, b.inv_item_hash);
  swap(a.__isset, b.__isset);
}

template void NotifyNewInventoryRequest::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NotifyNewInventoryRequest::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NotifyNewInventoryRequest::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NotifyNewInventoryRequest::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NotifyNewInventoryRequest::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NotifyNewInventoryRequest::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NotifyNewInventoryRequest::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NotifyNewInventoryRequest::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
namespace node { namespace cpp2 {

NotifyNewInventoryResponse::NotifyNewInventoryResponse(apache::thrift::FragileConstructor,  ::node::cpp2::ErrorStruct error__arg) :
    error(std::move(error__arg)) {
  __isset.error = true;
}

void NotifyNewInventoryResponse::__clear() {
  // clear all fields
  ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::clear(&error);
  __isset = {};
}

bool NotifyNewInventoryResponse::operator==(const NotifyNewInventoryResponse& rhs) const {
  if (!((error == rhs.error))) {
    return false;
  }
  return true;
}

const  ::node::cpp2::ErrorStruct& NotifyNewInventoryResponse::get_error() const& {
  return error;
}

 ::node::cpp2::ErrorStruct NotifyNewInventoryResponse::get_error() && {
  return std::move(error);
}

void NotifyNewInventoryResponse::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "error") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

void swap(NotifyNewInventoryResponse& a, NotifyNewInventoryResponse& b) {
  using ::std::swap;
  swap(a.error, b.error);
  swap(a.__isset, b.__isset);
}

template void NotifyNewInventoryResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NotifyNewInventoryResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NotifyNewInventoryResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NotifyNewInventoryResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void NotifyNewInventoryResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t NotifyNewInventoryResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NotifyNewInventoryResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NotifyNewInventoryResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
namespace node { namespace cpp2 {

GetPeerInfoRequest::GetPeerInfoRequest(apache::thrift::FragileConstructor, std::string requesting_host__arg, int32_t requesting_port__arg) :
    requesting_host(std::move(requesting_host__arg)),
    requesting_port(std::move(requesting_port__arg)) {
  __isset.requesting_host = true;
  __isset.requesting_port = true;
}

void GetPeerInfoRequest::__clear() {
  // clear all fields
  requesting_host = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  requesting_port = 0;
  __isset = {};
}

bool GetPeerInfoRequest::operator==(const GetPeerInfoRequest& rhs) const {
  if (!((requesting_host == rhs.requesting_host))) {
    return false;
  }
  if (!((requesting_port == rhs.requesting_port))) {
    return false;
  }
  return true;
}

void GetPeerInfoRequest::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "requesting_host") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "requesting_port") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
}

void swap(GetPeerInfoRequest& a, GetPeerInfoRequest& b) {
  using ::std::swap;
  swap(a.requesting_host, b.requesting_host);
  swap(a.requesting_port, b.requesting_port);
  swap(a.__isset, b.__isset);
}

template void GetPeerInfoRequest::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t GetPeerInfoRequest::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t GetPeerInfoRequest::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t GetPeerInfoRequest::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void GetPeerInfoRequest::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t GetPeerInfoRequest::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t GetPeerInfoRequest::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t GetPeerInfoRequest::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
namespace node { namespace cpp2 {

GetPeerInfoResponse::GetPeerInfoResponse(apache::thrift::FragileConstructor, std::string host__arg, int32_t port__arg, int32_t protocol_version__arg,  ::node::cpp2::ErrorStruct error__arg) :
    host(std::move(host__arg)),
    port(std::move(port__arg)),
    protocol_version(std::move(protocol_version__arg)),
    error(std::move(error__arg)) {
  __isset.host = true;
  __isset.port = true;
  __isset.protocol_version = true;
  __isset.error = true;
}

void GetPeerInfoResponse::__clear() {
  // clear all fields
  host = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  port = 0;
  protocol_version = 0;
  ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::clear(&error);
  __isset = {};
}

bool GetPeerInfoResponse::operator==(const GetPeerInfoResponse& rhs) const {
  if (!((host == rhs.host))) {
    return false;
  }
  if (!((port == rhs.port))) {
    return false;
  }
  if (!((protocol_version == rhs.protocol_version))) {
    return false;
  }
  if (!((error == rhs.error))) {
    return false;
  }
  return true;
}

const  ::node::cpp2::ErrorStruct& GetPeerInfoResponse::get_error() const& {
  return error;
}

 ::node::cpp2::ErrorStruct GetPeerInfoResponse::get_error() && {
  return std::move(error);
}

void GetPeerInfoResponse::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "host") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "port") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "protocol_version") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I32;
  }
  else if (_fname == "error") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_STRUCT;
  }
}

void swap(GetPeerInfoResponse& a, GetPeerInfoResponse& b) {
  using ::std::swap;
  swap(a.host, b.host);
  swap(a.port, b.port);
  swap(a.protocol_version, b.protocol_version);
  swap(a.error, b.error);
  swap(a.__isset, b.__isset);
}

template void GetPeerInfoResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t GetPeerInfoResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t GetPeerInfoResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t GetPeerInfoResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void GetPeerInfoResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t GetPeerInfoResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t GetPeerInfoResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t GetPeerInfoResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // node::cpp2
