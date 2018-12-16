/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "node/gen-cpp2/Node.h"

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>

namespace node { namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::node::cpp2::NotifyNewInventoryRequest*>> Node_notify_new_inventory_hash_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRUCT,  ::node::cpp2::NotifyNewInventoryResponse*>> Node_notify_new_inventory_hash_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::node::cpp2::SendTransactionRequest*>> Node_send_transaction_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRUCT,  ::node::cpp2::SendTransactionResponse*>> Node_send_transaction_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::node::cpp2::GetPeerInfoRequest*>> Node_get_peer_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRUCT,  ::node::cpp2::GetPeerInfoResponse*>> Node_get_peer_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void NodeAsyncProcessor::_processInThread_notify_new_inventory_hash(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, false, &NodeAsyncProcessor::process_notify_new_inventory_hash<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void NodeAsyncProcessor::process_notify_new_inventory_hash(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  Node_notify_new_inventory_hash_pargs args;
  std::unique_ptr< ::node::cpp2::NotifyNewInventoryRequest> uarg_request(new  ::node::cpp2::NotifyNewInventoryRequest());
  args.get<0>().value = uarg_request.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "Node.notify_new_inventory_hash", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function notify_new_inventory_hash";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("notify_new_inventory_hash", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        req->sendReply(queue.move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function notify_new_inventory_hash";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr< ::node::cpp2::NotifyNewInventoryResponse>>>(std::move(req), std::move(ctxStack), return_notify_new_inventory_hash<ProtocolIn_,ProtocolOut_>, throw_wrapped_notify_new_inventory_hash<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_notify_new_inventory_hash(std::move(callback), std::move(uarg_request));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue NodeAsyncProcessor::return_notify_new_inventory_hash(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::node::cpp2::NotifyNewInventoryResponse const& _return) {
  ProtocolOut_ prot;
  Node_notify_new_inventory_hash_presult result;
  result.get<0>().value = const_cast< ::node::cpp2::NotifyNewInventoryResponse*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("notify_new_inventory_hash", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NodeAsyncProcessor::throw_wrapped_notify_new_inventory_hash(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function notify_new_inventory_hash";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("notify_new_inventory_hash", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function notify_new_inventory_hash";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NodeAsyncProcessor::_processInThread_send_transaction(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, false, &NodeAsyncProcessor::process_send_transaction<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void NodeAsyncProcessor::process_send_transaction(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  Node_send_transaction_pargs args;
  std::unique_ptr< ::node::cpp2::SendTransactionRequest> uarg_request(new  ::node::cpp2::SendTransactionRequest());
  args.get<0>().value = uarg_request.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "Node.send_transaction", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function send_transaction";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("send_transaction", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        req->sendReply(queue.move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function send_transaction";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr< ::node::cpp2::SendTransactionResponse>>>(std::move(req), std::move(ctxStack), return_send_transaction<ProtocolIn_,ProtocolOut_>, throw_wrapped_send_transaction<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_send_transaction(std::move(callback), std::move(uarg_request));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue NodeAsyncProcessor::return_send_transaction(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::node::cpp2::SendTransactionResponse const& _return) {
  ProtocolOut_ prot;
  Node_send_transaction_presult result;
  result.get<0>().value = const_cast< ::node::cpp2::SendTransactionResponse*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("send_transaction", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NodeAsyncProcessor::throw_wrapped_send_transaction(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function send_transaction";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("send_transaction", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function send_transaction";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void NodeAsyncProcessor::_processInThread_get_peer(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, false, &NodeAsyncProcessor::process_get_peer<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void NodeAsyncProcessor::process_get_peer(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  Node_get_peer_pargs args;
  std::unique_ptr< ::node::cpp2::GetPeerInfoRequest> uarg_request(new  ::node::cpp2::GetPeerInfoRequest());
  args.get<0>().value = uarg_request.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "Node.get_peer", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function get_peer";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("get_peer", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        req->sendReply(queue.move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function get_peer";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr< ::node::cpp2::GetPeerInfoResponse>>>(std::move(req), std::move(ctxStack), return_get_peer<ProtocolIn_,ProtocolOut_>, throw_wrapped_get_peer<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_get_peer(std::move(callback), std::move(uarg_request));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue NodeAsyncProcessor::return_get_peer(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::node::cpp2::GetPeerInfoResponse const& _return) {
  ProtocolOut_ prot;
  Node_get_peer_presult result;
  result.get<0>().value = const_cast< ::node::cpp2::GetPeerInfoResponse*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("get_peer", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void NodeAsyncProcessor::throw_wrapped_get_peer(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function get_peer";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("get_peer", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function get_peer";
    }
  }
}

}} // node::cpp2
namespace apache { namespace thrift {

}} // apache::thrift
