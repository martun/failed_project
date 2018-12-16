/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/cpp2/gen-cpp2/SaslAuthService.h"

#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>

namespace apache { namespace thrift { namespace sasl {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::apache::thrift::sasl::SaslStart*>> SaslAuthService_authFirstRequest_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRUCT,  ::apache::thrift::sasl::SaslReply*>> SaslAuthService_authFirstRequest_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::apache::thrift::sasl::SaslRequest*>> SaslAuthService_authNextRequest_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_STRUCT,  ::apache::thrift::sasl::SaslReply*>> SaslAuthService_authNextRequest_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void SaslAuthServiceAsyncProcessor::_processInThread_authFirstRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, false, &SaslAuthServiceAsyncProcessor::process_authFirstRequest<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void SaslAuthServiceAsyncProcessor::process_authFirstRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  SaslAuthService_authFirstRequest_pargs args;
  std::unique_ptr< ::apache::thrift::sasl::SaslStart> uarg_saslStart(new  ::apache::thrift::sasl::SaslStart());
  args.get<0>().value = uarg_saslStart.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "SaslAuthService.authFirstRequest", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function authFirstRequest";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("authFirstRequest", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        req->sendReply(queue.move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function authFirstRequest";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>>(std::move(req), std::move(ctxStack), return_authFirstRequest<ProtocolIn_,ProtocolOut_>, throw_wrapped_authFirstRequest<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_authFirstRequest(std::move(callback), std::move(uarg_saslStart));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue SaslAuthServiceAsyncProcessor::return_authFirstRequest(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::apache::thrift::sasl::SaslReply const& _return) {
  ProtocolOut_ prot;
  SaslAuthService_authFirstRequest_presult result;
  result.get<0>().value = const_cast< ::apache::thrift::sasl::SaslReply*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("authFirstRequest", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void SaslAuthServiceAsyncProcessor::throw_wrapped_authFirstRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function authFirstRequest";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("authFirstRequest", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function authFirstRequest";
    }
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void SaslAuthServiceAsyncProcessor::_processInThread_authNextRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(buf),std::move(iprot), ctx, eb, tm, pri, false, &SaslAuthServiceAsyncProcessor::process_authNextRequest<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void SaslAuthServiceAsyncProcessor::process_authNextRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  SaslAuthService_authNextRequest_pargs args;
  std::unique_ptr< ::apache::thrift::sasl::SaslRequest> uarg_saslRequest(new  ::apache::thrift::sasl::SaslRequest());
  args.get<0>().value = uarg_saslRequest.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "SaslAuthService.authNextRequest", ctx));
  try {
    deserializeRequest(args, buf.get(), iprot.get(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    ProtocolOut_ prot;
    if (req) {
      LOG(ERROR) << ex.what() << " in function authNextRequest";
      apache::thrift::TApplicationException x(apache::thrift::TApplicationException::TApplicationExceptionType::PROTOCOL_ERROR, ex.what());
      folly::IOBufQueue queue = serializeException("authNextRequest", &prot, ctx->getProtoSeqId(), nullptr, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), ctx->getHeader()->getWriteTransforms(), ctx->getHeader()->getMinCompressBytes()));
      eb->runInEventBaseThread([queue = std::move(queue), req = std::move(req)]() mutable {
        req->sendReply(queue.move());
      }
      );
      return;
    }
    else {
      LOG(ERROR) << ex.what() << " in oneway function authNextRequest";
    }
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::sasl::SaslReply>>>(std::move(req), std::move(ctxStack), return_authNextRequest<ProtocolIn_,ProtocolOut_>, throw_wrapped_authNextRequest<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  ctx->setStartedProcessing();
  iface_->async_tm_authNextRequest(std::move(callback), std::move(uarg_saslRequest));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue SaslAuthServiceAsyncProcessor::return_authNextRequest(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::apache::thrift::sasl::SaslReply const& _return) {
  ProtocolOut_ prot;
  SaslAuthService_authNextRequest_presult result;
  result.get<0>().value = const_cast< ::apache::thrift::sasl::SaslReply*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("authNextRequest", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void SaslAuthServiceAsyncProcessor::throw_wrapped_authNextRequest(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ProtocolOut_ prot;
   {
    if (req) {
      LOG(ERROR) << ew << " in function authNextRequest";
      apache::thrift::TApplicationException x(ew.what().toStdString());
      ctx->userExceptionWrapped(false, ew);
      ctx->handlerErrorWrapped(ew);
      folly::IOBufQueue queue = serializeException("authNextRequest", &prot, protoSeqId, ctx, x);
      queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
      req->sendReply(queue.move());
      return;
    }
    else {
      LOG(ERROR) << ew << " in oneway function authNextRequest";
    }
  }
}

}}} // apache::thrift::sasl
namespace apache { namespace thrift {

}} // apache::thrift