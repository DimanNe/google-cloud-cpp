// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#include "google/cloud/videointelligence/video_intelligence_connection.h"
#include "google/cloud/videointelligence/internal/video_intelligence_connection_impl.h"
#include "google/cloud/videointelligence/internal/video_intelligence_option_defaults.h"
#include "google/cloud/videointelligence/internal/video_intelligence_stub_factory.h"
#include "google/cloud/videointelligence/video_intelligence_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include <memory>

namespace google {
namespace cloud {
namespace videointelligence {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoIntelligenceServiceConnection::~VideoIntelligenceServiceConnection() =
    default;

future<StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>
VideoIntelligenceServiceConnection::AnnotateVideo(
    google::cloud::videointelligence::v1::AnnotateVideoRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<VideoIntelligenceServiceConnection>
MakeVideoIntelligenceServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 VideoIntelligenceServicePolicyOptionList>(
      options, __func__);
  options = videointelligence_internal::VideoIntelligenceServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      videointelligence_internal::CreateDefaultVideoIntelligenceServiceStub(
          background->cq(), options);
  return std::make_shared<
      videointelligence_internal::VideoIntelligenceServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace videointelligence_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<videointelligence::VideoIntelligenceServiceConnection>
MakeVideoIntelligenceServiceConnection(
    std::shared_ptr<VideoIntelligenceServiceStub> stub, Options options) {
  options = VideoIntelligenceServiceDefaultOptions(std::move(options));
  return std::make_shared<
      videointelligence_internal::VideoIntelligenceServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence_internal
}  // namespace cloud
}  // namespace google