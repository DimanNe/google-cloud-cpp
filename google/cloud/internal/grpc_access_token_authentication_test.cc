// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/grpc_access_token_authentication.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
inline namespace GOOGLE_CLOUD_CPP_NS {
namespace internal {
namespace {

using ::testing::Return;

TEST(GrpcAccessTokenAuthenticationTest, Simple) {
  ::testing::MockFunction<AccessToken()> mock_source;
  auto const expiration =
      std::chrono::system_clock::now() - std::chrono::minutes(10);
  EXPECT_CALL(mock_source, Call)
      .WillOnce(Return(AccessToken{"token1", expiration}))
      .WillOnce(Return(AccessToken{"token2", expiration}))
      .WillOnce(Return(AccessToken{"token3", expiration}));

  GrpcAccessTokenAuthentication auth(mock_source.AsStdFunction());

  auto channel = auth.CreateChannel("localhost:1", grpc::ChannelArguments{});
  EXPECT_NE(nullptr, channel.get());

  for (auto attempt : {1, 2, 3}) {
    SCOPED_TRACE("Running attempt " + std::to_string(attempt));
    grpc::ClientContext context;
    EXPECT_EQ(nullptr, context.credentials());
    auth.ConfigureContext(context);
    EXPECT_NE(nullptr, context.credentials());
  }
}

TEST(GrpcAccessTokenAuthenticationTest, NotExpired) {
  ::testing::MockFunction<AccessToken()> mock_source;
  auto const expiration =
      std::chrono::system_clock::now() + std::chrono::minutes(10);
  EXPECT_CALL(mock_source, Call)
      .WillOnce(Return(AccessToken{"token1", expiration}));

  GrpcAccessTokenAuthentication auth(mock_source.AsStdFunction());

  auto channel = auth.CreateChannel("localhost:1", grpc::ChannelArguments{});
  EXPECT_NE(nullptr, channel.get());

  for (auto attempt : {1, 2, 3}) {
    SCOPED_TRACE("Running attempt " + std::to_string(attempt));
    grpc::ClientContext context;
    EXPECT_EQ(nullptr, context.credentials());
    auth.ConfigureContext(context);
    EXPECT_NE(nullptr, context.credentials());
  }
}

}  // namespace
}  // namespace internal
}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace cloud
}  // namespace google
