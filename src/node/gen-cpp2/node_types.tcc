/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "node/gen-cpp2/node_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/ProtocolReaderStructReadState.h>

namespace node { namespace cpp2 {

template <class Protocol_>
void ErrorStruct::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_BYTE))) {
    goto _loop;
  }
_readField_code:
  {
    iprot->readByte(this->code);
    this->__isset.code = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_message:
  {
    iprot->readString(this->message);
    this->__isset.message = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_BYTE)) {
        goto _readField_code;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_message;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t ErrorStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ErrorStruct");
  xfer += prot_->serializedFieldSize("code", apache::thrift::protocol::T_BYTE, 1);
  xfer += prot_->serializedSizeByte(this->code);
  xfer += prot_->serializedFieldSize("message", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->message);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ErrorStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ErrorStruct");
  xfer += prot_->serializedFieldSize("code", apache::thrift::protocol::T_BYTE, 1);
  xfer += prot_->serializedSizeByte(this->code);
  xfer += prot_->serializedFieldSize("message", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->message);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ErrorStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ErrorStruct");
  xfer += prot_->writeFieldBegin("code", apache::thrift::protocol::T_BYTE, 1);
  xfer += prot_->writeByte(this->code);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("message", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->message);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
namespace node { namespace cpp2 {

template <class Protocol_>
void Transaction::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_sending_wallet_id:
  {
    iprot->readString(this->sending_wallet_id);
    this->__isset.sending_wallet_id = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_receiving_wallet_id:
  {
    iprot->readString(this->receiving_wallet_id);
    this->__isset.receiving_wallet_id = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_amount:
  {
    iprot->readI64(this->amount);
    this->__isset.amount = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_timestamp:
  {
    iprot->readI64(this->timestamp);
    this->__isset.timestamp = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_sending_wallet_id;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_receiving_wallet_id;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I64)) {
        goto _readField_amount;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I64)) {
        goto _readField_timestamp;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Transaction::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Transaction");
  xfer += prot_->serializedFieldSize("sending_wallet_id", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->sending_wallet_id);
  xfer += prot_->serializedFieldSize("receiving_wallet_id", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->receiving_wallet_id);
  xfer += prot_->serializedFieldSize("amount", apache::thrift::protocol::T_I64, 3);
  xfer += prot_->serializedSizeI64(this->amount);
  xfer += prot_->serializedFieldSize("timestamp", apache::thrift::protocol::T_I64, 4);
  xfer += prot_->serializedSizeI64(this->timestamp);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Transaction::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Transaction");
  xfer += prot_->serializedFieldSize("sending_wallet_id", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->sending_wallet_id);
  xfer += prot_->serializedFieldSize("receiving_wallet_id", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->receiving_wallet_id);
  xfer += prot_->serializedFieldSize("amount", apache::thrift::protocol::T_I64, 3);
  xfer += prot_->serializedSizeI64(this->amount);
  xfer += prot_->serializedFieldSize("timestamp", apache::thrift::protocol::T_I64, 4);
  xfer += prot_->serializedSizeI64(this->timestamp);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Transaction::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Transaction");
  xfer += prot_->writeFieldBegin("sending_wallet_id", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->sending_wallet_id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("receiving_wallet_id", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->receiving_wallet_id);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("amount", apache::thrift::protocol::T_I64, 3);
  xfer += prot_->writeI64(this->amount);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("timestamp", apache::thrift::protocol::T_I64, 4);
  xfer += prot_->writeI64(this->timestamp);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
namespace node { namespace cpp2 {

template <class Protocol_>
void SendTransactionRequest::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_txn_hash:
  {
    iprot->readString(this->txn_hash);
    this->__isset.txn_hash = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_txn_hash;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t SendTransactionRequest::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SendTransactionRequest");
  xfer += prot_->serializedFieldSize("txn_hash", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->txn_hash);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SendTransactionRequest::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SendTransactionRequest");
  xfer += prot_->serializedFieldSize("txn_hash", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->txn_hash);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SendTransactionRequest::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SendTransactionRequest");
  xfer += prot_->writeFieldBegin("txn_hash", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->txn_hash);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
namespace node { namespace cpp2 {

template <class Protocol_>
void SendTransactionResponse::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_txn:
  {
    ::apache::thrift::Cpp2Ops<  ::node::cpp2::Transaction>::read(iprot, &this->txn);
    this->__isset.txn = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_error:
  {
    ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::read(iprot, &this->error);
    this->__isset.error = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRUCT)) {
        goto _readField_txn;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRUCT)) {
        goto _readField_error;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t SendTransactionResponse::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SendTransactionResponse");
  xfer += prot_->serializedFieldSize("txn", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::Transaction>::serializedSize(prot_, &this->txn);
  xfer += prot_->serializedFieldSize("error", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::serializedSize(prot_, &this->error);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SendTransactionResponse::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("SendTransactionResponse");
  xfer += prot_->serializedFieldSize("txn", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::Transaction>::serializedSizeZC(prot_, &this->txn);
  xfer += prot_->serializedFieldSize("error", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::serializedSizeZC(prot_, &this->error);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t SendTransactionResponse::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("SendTransactionResponse");
  xfer += prot_->writeFieldBegin("txn", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::Transaction>::write(prot_, &this->txn);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("error", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::write(prot_, &this->error);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
namespace node { namespace cpp2 {

template <class Protocol_>
void NotifyNewInventoryRequest::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_inv_item_hash:
  {
    iprot->readString(this->inv_item_hash);
    this->__isset.inv_item_hash = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_inv_item_hash;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t NotifyNewInventoryRequest::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("NotifyNewInventoryRequest");
  xfer += prot_->serializedFieldSize("inv_item_hash", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->inv_item_hash);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t NotifyNewInventoryRequest::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("NotifyNewInventoryRequest");
  xfer += prot_->serializedFieldSize("inv_item_hash", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->inv_item_hash);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t NotifyNewInventoryRequest::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("NotifyNewInventoryRequest");
  xfer += prot_->writeFieldBegin("inv_item_hash", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->inv_item_hash);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
namespace node { namespace cpp2 {

template <class Protocol_>
void NotifyNewInventoryResponse::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_error:
  {
    ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::read(iprot, &this->error);
    this->__isset.error = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRUCT)) {
        goto _readField_error;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t NotifyNewInventoryResponse::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("NotifyNewInventoryResponse");
  xfer += prot_->serializedFieldSize("error", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::serializedSize(prot_, &this->error);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t NotifyNewInventoryResponse::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("NotifyNewInventoryResponse");
  xfer += prot_->serializedFieldSize("error", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::serializedSizeZC(prot_, &this->error);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t NotifyNewInventoryResponse::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("NotifyNewInventoryResponse");
  xfer += prot_->writeFieldBegin("error", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::write(prot_, &this->error);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
namespace node { namespace cpp2 {

template <class Protocol_>
void GetPeerInfoRequest::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_requesting_host:
  {
    iprot->readString(this->requesting_host);
    this->__isset.requesting_host = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_requesting_port:
  {
    iprot->readI32(this->requesting_port);
    this->__isset.requesting_port = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_requesting_host;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_requesting_port;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t GetPeerInfoRequest::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GetPeerInfoRequest");
  xfer += prot_->serializedFieldSize("requesting_host", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->requesting_host);
  xfer += prot_->serializedFieldSize("requesting_port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->requesting_port);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GetPeerInfoRequest::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GetPeerInfoRequest");
  xfer += prot_->serializedFieldSize("requesting_host", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->requesting_host);
  xfer += prot_->serializedFieldSize("requesting_port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->requesting_port);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GetPeerInfoRequest::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("GetPeerInfoRequest");
  xfer += prot_->writeFieldBegin("requesting_host", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->requesting_host);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("requesting_port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->requesting_port);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
namespace node { namespace cpp2 {

template <class Protocol_>
void GetPeerInfoResponse::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_host:
  {
    iprot->readString(this->host);
    this->__isset.host = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_port:
  {
    iprot->readI32(this->port);
    this->__isset.port = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_protocol_version:
  {
    iprot->readI32(this->protocol_version);
    this->__isset.protocol_version = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRUCT))) {
    goto _loop;
  }
_readField_error:
  {
    ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::read(iprot, &this->error);
    this->__isset.error = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    this->translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_host;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_port;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_protocol_version;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRUCT)) {
        goto _readField_error;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t GetPeerInfoResponse::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GetPeerInfoResponse");
  xfer += prot_->serializedFieldSize("host", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->host);
  xfer += prot_->serializedFieldSize("port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->port);
  xfer += prot_->serializedFieldSize("protocol_version", apache::thrift::protocol::T_I32, 3);
  xfer += prot_->serializedSizeI32(this->protocol_version);
  xfer += prot_->serializedFieldSize("error", apache::thrift::protocol::T_STRUCT, 4);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::serializedSize(prot_, &this->error);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GetPeerInfoResponse::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GetPeerInfoResponse");
  xfer += prot_->serializedFieldSize("host", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->host);
  xfer += prot_->serializedFieldSize("port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->port);
  xfer += prot_->serializedFieldSize("protocol_version", apache::thrift::protocol::T_I32, 3);
  xfer += prot_->serializedSizeI32(this->protocol_version);
  xfer += prot_->serializedFieldSize("error", apache::thrift::protocol::T_STRUCT, 4);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::serializedSizeZC(prot_, &this->error);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GetPeerInfoResponse::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("GetPeerInfoResponse");
  xfer += prot_->writeFieldBegin("host", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->host);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->port);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("protocol_version", apache::thrift::protocol::T_I32, 3);
  xfer += prot_->writeI32(this->protocol_version);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("error", apache::thrift::protocol::T_STRUCT, 4);
  xfer += ::apache::thrift::Cpp2Ops<  ::node::cpp2::ErrorStruct>::write(prot_, &this->error);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // node::cpp2
