/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/thrift/gen-cpp2/RpcMetadata_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/ProtocolReaderStructReadState.h>

namespace apache { namespace thrift {

}} // apache::thrift
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift {

}} // apache::thrift
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift {

}} // apache::thrift
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift {

template <class Protocol_>
void RequestRpcMetadata::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_protocol:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::read(*iprot, this->protocol);
    this->__isset.protocol = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    iprot->readString(this->name);
    this->__isset.name = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_kind:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcKind>::read(*iprot, this->kind);
    this->__isset.kind = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_seqId:
  {
    iprot->readI32(this->seqId);
    this->__isset.seqId = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_clientTimeoutMs:
  {
    iprot->readI32(this->clientTimeoutMs);
    this->__isset.clientTimeoutMs = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_queueTimeoutMs:
  {
    iprot->readI32(this->queueTimeoutMs);
    this->__isset.queueTimeoutMs = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          7,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_priority:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcPriority>::read(*iprot, this->priority);
    this->__isset.priority = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          7,
          8,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_otherMetadata:
  {
    this->otherMetadata = std::map<std::string, std::string>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::read(*iprot, this->otherMetadata);
    this->__isset.otherMetadata = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          8,
          9,
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
          9,
          10,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_url:
  {
    iprot->readString(this->url);
    this->__isset.url = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          10,
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
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_protocol;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_kind;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_seqId;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_clientTimeoutMs;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_queueTimeoutMs;
      } else {
        goto _skip;
      }
    }
    case 7:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_priority;
      } else {
        goto _skip;
      }
    }
    case 8:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_MAP)) {
        goto _readField_otherMetadata;
      } else {
        goto _skip;
      }
    }
    case 9:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_host;
      } else {
        goto _skip;
      }
    }
    case 10:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_STRING)) {
        goto _readField_url;
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
uint32_t RequestRpcMetadata::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("RequestRpcMetadata");
  if (this->__isset.protocol) {
    xfer += prot_->serializedFieldSize("protocol", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::serializedSize<false>(*prot_, this->protocol);
  }
  if (this->__isset.name) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->name);
  }
  if (this->__isset.kind) {
    xfer += prot_->serializedFieldSize("kind", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcKind>::serializedSize<false>(*prot_, this->kind);
  }
  if (this->__isset.seqId) {
    xfer += prot_->serializedFieldSize("seqId", apache::thrift::protocol::T_I32, 4);
    xfer += prot_->serializedSizeI32(this->seqId);
  }
  if (this->__isset.clientTimeoutMs) {
    xfer += prot_->serializedFieldSize("clientTimeoutMs", apache::thrift::protocol::T_I32, 5);
    xfer += prot_->serializedSizeI32(this->clientTimeoutMs);
  }
  if (this->__isset.queueTimeoutMs) {
    xfer += prot_->serializedFieldSize("queueTimeoutMs", apache::thrift::protocol::T_I32, 6);
    xfer += prot_->serializedSizeI32(this->queueTimeoutMs);
  }
  if (this->__isset.priority) {
    xfer += prot_->serializedFieldSize("priority", apache::thrift::protocol::T_I32, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcPriority>::serializedSize<false>(*prot_, this->priority);
  }
  if (this->__isset.otherMetadata) {
    xfer += prot_->serializedFieldSize("otherMetadata", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::serializedSize<false>(*prot_, this->otherMetadata);
  }
  if (this->__isset.host) {
    xfer += prot_->serializedFieldSize("host", apache::thrift::protocol::T_STRING, 9);
    xfer += prot_->serializedSizeString(this->host);
  }
  if (this->__isset.url) {
    xfer += prot_->serializedFieldSize("url", apache::thrift::protocol::T_STRING, 10);
    xfer += prot_->serializedSizeString(this->url);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t RequestRpcMetadata::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("RequestRpcMetadata");
  if (this->__isset.protocol) {
    xfer += prot_->serializedFieldSize("protocol", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::serializedSize<false>(*prot_, this->protocol);
  }
  if (this->__isset.name) {
    xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->serializedSizeString(this->name);
  }
  if (this->__isset.kind) {
    xfer += prot_->serializedFieldSize("kind", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcKind>::serializedSize<false>(*prot_, this->kind);
  }
  if (this->__isset.seqId) {
    xfer += prot_->serializedFieldSize("seqId", apache::thrift::protocol::T_I32, 4);
    xfer += prot_->serializedSizeI32(this->seqId);
  }
  if (this->__isset.clientTimeoutMs) {
    xfer += prot_->serializedFieldSize("clientTimeoutMs", apache::thrift::protocol::T_I32, 5);
    xfer += prot_->serializedSizeI32(this->clientTimeoutMs);
  }
  if (this->__isset.queueTimeoutMs) {
    xfer += prot_->serializedFieldSize("queueTimeoutMs", apache::thrift::protocol::T_I32, 6);
    xfer += prot_->serializedSizeI32(this->queueTimeoutMs);
  }
  if (this->__isset.priority) {
    xfer += prot_->serializedFieldSize("priority", apache::thrift::protocol::T_I32, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcPriority>::serializedSize<false>(*prot_, this->priority);
  }
  if (this->__isset.otherMetadata) {
    xfer += prot_->serializedFieldSize("otherMetadata", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::serializedSize<false>(*prot_, this->otherMetadata);
  }
  if (this->__isset.host) {
    xfer += prot_->serializedFieldSize("host", apache::thrift::protocol::T_STRING, 9);
    xfer += prot_->serializedSizeString(this->host);
  }
  if (this->__isset.url) {
    xfer += prot_->serializedFieldSize("url", apache::thrift::protocol::T_STRING, 10);
    xfer += prot_->serializedSizeString(this->url);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t RequestRpcMetadata::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("RequestRpcMetadata");
  if (this->__isset.protocol) {
    xfer += prot_->writeFieldBegin("protocol", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::write(*prot_, this->protocol);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.name) {
    xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 2);
    xfer += prot_->writeString(this->name);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.kind) {
    xfer += prot_->writeFieldBegin("kind", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcKind>::write(*prot_, this->kind);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.seqId) {
    xfer += prot_->writeFieldBegin("seqId", apache::thrift::protocol::T_I32, 4);
    xfer += prot_->writeI32(this->seqId);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.clientTimeoutMs) {
    xfer += prot_->writeFieldBegin("clientTimeoutMs", apache::thrift::protocol::T_I32, 5);
    xfer += prot_->writeI32(this->clientTimeoutMs);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.queueTimeoutMs) {
    xfer += prot_->writeFieldBegin("queueTimeoutMs", apache::thrift::protocol::T_I32, 6);
    xfer += prot_->writeI32(this->queueTimeoutMs);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.priority) {
    xfer += prot_->writeFieldBegin("priority", apache::thrift::protocol::T_I32, 7);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::RpcPriority>::write(*prot_, this->priority);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.otherMetadata) {
    xfer += prot_->writeFieldBegin("otherMetadata", apache::thrift::protocol::T_MAP, 8);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::write(*prot_, this->otherMetadata);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.host) {
    xfer += prot_->writeFieldBegin("host", apache::thrift::protocol::T_STRING, 9);
    xfer += prot_->writeString(this->host);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.url) {
    xfer += prot_->writeFieldBegin("url", apache::thrift::protocol::T_STRING, 10);
    xfer += prot_->writeString(this->url);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // apache::thrift
namespace apache { namespace thrift {

template <class Protocol_>
void ResponseRpcMetadata::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_protocol:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::read(*iprot, this->protocol);
    this->__isset.protocol = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_seqId:
  {
    iprot->readI32(this->seqId);
    this->__isset.seqId = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_otherMetadata:
  {
    this->otherMetadata = std::map<std::string, std::string>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::read(*iprot, this->otherMetadata);
    this->__isset.otherMetadata = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
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
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_protocol;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_I32)) {
        goto _readField_seqId;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.fieldType == apache::thrift::protocol::T_MAP)) {
        goto _readField_otherMetadata;
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
uint32_t ResponseRpcMetadata::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ResponseRpcMetadata");
  if (this->__isset.protocol) {
    xfer += prot_->serializedFieldSize("protocol", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::serializedSize<false>(*prot_, this->protocol);
  }
  if (this->__isset.seqId) {
    xfer += prot_->serializedFieldSize("seqId", apache::thrift::protocol::T_I32, 2);
    xfer += prot_->serializedSizeI32(this->seqId);
  }
  if (this->__isset.otherMetadata) {
    xfer += prot_->serializedFieldSize("otherMetadata", apache::thrift::protocol::T_MAP, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::serializedSize<false>(*prot_, this->otherMetadata);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ResponseRpcMetadata::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ResponseRpcMetadata");
  if (this->__isset.protocol) {
    xfer += prot_->serializedFieldSize("protocol", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::serializedSize<false>(*prot_, this->protocol);
  }
  if (this->__isset.seqId) {
    xfer += prot_->serializedFieldSize("seqId", apache::thrift::protocol::T_I32, 2);
    xfer += prot_->serializedSizeI32(this->seqId);
  }
  if (this->__isset.otherMetadata) {
    xfer += prot_->serializedFieldSize("otherMetadata", apache::thrift::protocol::T_MAP, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::serializedSize<false>(*prot_, this->otherMetadata);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ResponseRpcMetadata::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ResponseRpcMetadata");
  if (this->__isset.protocol) {
    xfer += prot_->writeFieldBegin("protocol", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::apache::thrift::ProtocolId>::write(*prot_, this->protocol);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.seqId) {
    xfer += prot_->writeFieldBegin("seqId", apache::thrift::protocol::T_I32, 2);
    xfer += prot_->writeI32(this->seqId);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.otherMetadata) {
    xfer += prot_->writeFieldBegin("otherMetadata", apache::thrift::protocol::T_MAP, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::map<std::string, std::string>>::write(*prot_, this->otherMetadata);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}} // apache::thrift