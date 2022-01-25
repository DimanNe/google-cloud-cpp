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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/versions_connection.h"
#include "google/cloud/appengine/internal/versions_connection_impl.h"
#include "google/cloud/appengine/internal/versions_option_defaults.h"
#include "google/cloud/appengine/internal/versions_stub_factory.h"
#include "google/cloud/appengine/versions_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsConnection::~VersionsConnection() = default;

StreamRange<google::appengine::v1::Version> VersionsConnection::ListVersions(
    google::appengine::v1::ListVersionsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::appengine::v1::Version>>(
      std::move(request),
      [](google::appengine::v1::ListVersionsRequest const&) {
        return StatusOr<google::appengine::v1::ListVersionsResponse>{};
      },
      [](google::appengine::v1::ListVersionsResponse const&) {
        return std::vector<google::appengine::v1::Version>();
      });
}

StatusOr<google::appengine::v1::Version> VersionsConnection::GetVersion(
    google::appengine::v1::GetVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnection::CreateVersion(
    google::appengine::v1::CreateVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Version>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnection::UpdateVersion(
    google::appengine::v1::UpdateVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Version>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
VersionsConnection::DeleteVersion(
    google::appengine::v1::DeleteVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::OperationMetadataV1>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<VersionsConnection> MakeVersionsConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 VersionsPolicyOptionList>(options, __func__);
  options = appengine_internal::VersionsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      appengine_internal::CreateDefaultVersionsStub(background->cq(), options);
  return std::make_shared<appengine_internal::VersionsConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<appengine::VersionsConnection> MakeVersionsConnection(
    std::shared_ptr<VersionsStub> stub, Options options) {
  options = VersionsDefaultOptions(std::move(options));
  return std::make_shared<appengine_internal::VersionsConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google