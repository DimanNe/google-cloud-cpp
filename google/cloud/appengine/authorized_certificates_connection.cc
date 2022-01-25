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

#include "google/cloud/appengine/authorized_certificates_connection.h"
#include "google/cloud/appengine/authorized_certificates_options.h"
#include "google/cloud/appengine/internal/authorized_certificates_connection_impl.h"
#include "google/cloud/appengine/internal/authorized_certificates_option_defaults.h"
#include "google/cloud/appengine/internal/authorized_certificates_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AuthorizedCertificatesConnection::~AuthorizedCertificatesConnection() = default;

StreamRange<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesConnection::ListAuthorizedCertificates(
    google::appengine::v1::ListAuthorizedCertificatesRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::appengine::v1::AuthorizedCertificate>>(
      std::move(request),
      [](google::appengine::v1::ListAuthorizedCertificatesRequest const&) {
        return StatusOr<
            google::appengine::v1::ListAuthorizedCertificatesResponse>{};
      },
      [](google::appengine::v1::ListAuthorizedCertificatesResponse const&) {
        return std::vector<google::appengine::v1::AuthorizedCertificate>();
      });
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesConnection::GetAuthorizedCertificate(
    google::appengine::v1::GetAuthorizedCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesConnection::CreateAuthorizedCertificate(
    google::appengine::v1::CreateAuthorizedCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::appengine::v1::AuthorizedCertificate>
AuthorizedCertificatesConnection::UpdateAuthorizedCertificate(
    google::appengine::v1::UpdateAuthorizedCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AuthorizedCertificatesConnection::DeleteAuthorizedCertificate(
    google::appengine::v1::DeleteAuthorizedCertificateRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AuthorizedCertificatesConnection>
MakeAuthorizedCertificatesConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AuthorizedCertificatesPolicyOptionList>(
      options, __func__);
  options = appengine_internal::AuthorizedCertificatesDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = appengine_internal::CreateDefaultAuthorizedCertificatesStub(
      background->cq(), options);
  return std::make_shared<
      appengine_internal::AuthorizedCertificatesConnectionImpl>(
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

std::shared_ptr<appengine::AuthorizedCertificatesConnection>
MakeAuthorizedCertificatesConnection(
    std::shared_ptr<AuthorizedCertificatesStub> stub, Options options) {
  options = AuthorizedCertificatesDefaultOptions(std::move(options));
  return std::make_shared<
      appengine_internal::AuthorizedCertificatesConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google