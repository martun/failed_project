/*
 * Copyright 2017-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <folly/executors/SerialExecutor.h>
#include <gmock/gmock.h>
#include <thrift/lib/cpp2/transport/rsocket/test/util/gen-cpp2/StreamService.h>

namespace testutil {
namespace testservice {

class TestServiceMock : public StreamServiceSvIf {
 public:
  TestServiceMock() {}

  apache::thrift::Stream<int32_t> range(int32_t from, int32_t to) override;
  apache::thrift::Stream<int32_t> prefixSumIOThread(
      apache::thrift::SemiStream<int32_t> input) override;

  apache::thrift::Stream<Message> returnNullptr() override;
  apache::thrift::Stream<Message> throwException(
      apache::thrift::SemiStream<Message> input) override;
  apache::thrift::ResponseAndStream<int, Message> throwError() override;

 protected:
  folly::SerialExecutor executor_;
};

} // namespace testservice
} // namespace testutil
