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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_ACCESS_CONTEXT_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_ACCESS_CONTEXT_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/identity/accesscontextmanager/v1/access_context_manager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace accesscontextmanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AccessContextManagerConnectionIdempotencyPolicy {
 public:
  virtual ~AccessContextManagerConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<AccessContextManagerConnectionIdempotencyPolicy>
  clone() const = 0;

  virtual google::cloud::Idempotency ListAccessPolicies(
      google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest
          request) = 0;

  virtual google::cloud::Idempotency GetAccessPolicy(
      google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateAccessPolicy(
      google::identity::accesscontextmanager::v1::AccessPolicy const&
          request) = 0;

  virtual google::cloud::Idempotency UpdateAccessPolicy(
      google::identity::accesscontextmanager::v1::
          UpdateAccessPolicyRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteAccessPolicy(
      google::identity::accesscontextmanager::v1::
          DeleteAccessPolicyRequest const& request) = 0;

  virtual google::cloud::Idempotency ListAccessLevels(
      google::identity::accesscontextmanager::v1::ListAccessLevelsRequest
          request) = 0;

  virtual google::cloud::Idempotency GetAccessLevel(
      google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
          request) = 0;

  virtual google::cloud::Idempotency CreateAccessLevel(
      google::identity::accesscontextmanager::v1::
          CreateAccessLevelRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateAccessLevel(
      google::identity::accesscontextmanager::v1::
          UpdateAccessLevelRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteAccessLevel(
      google::identity::accesscontextmanager::v1::
          DeleteAccessLevelRequest const& request) = 0;

  virtual google::cloud::Idempotency ReplaceAccessLevels(
      google::identity::accesscontextmanager::v1::
          ReplaceAccessLevelsRequest const& request) = 0;

  virtual google::cloud::Idempotency ListServicePerimeters(
      google::identity::accesscontextmanager::v1::ListServicePerimetersRequest
          request) = 0;

  virtual google::cloud::Idempotency GetServicePerimeter(
      google::identity::accesscontextmanager::v1::
          GetServicePerimeterRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateServicePerimeter(
      google::identity::accesscontextmanager::v1::
          CreateServicePerimeterRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateServicePerimeter(
      google::identity::accesscontextmanager::v1::
          UpdateServicePerimeterRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteServicePerimeter(
      google::identity::accesscontextmanager::v1::
          DeleteServicePerimeterRequest const& request) = 0;

  virtual google::cloud::Idempotency ReplaceServicePerimeters(
      google::identity::accesscontextmanager::v1::
          ReplaceServicePerimetersRequest const& request) = 0;

  virtual google::cloud::Idempotency CommitServicePerimeters(
      google::identity::accesscontextmanager::v1::
          CommitServicePerimetersRequest const& request) = 0;

  virtual google::cloud::Idempotency ListGcpUserAccessBindings(
      google::identity::accesscontextmanager::v1::
          ListGcpUserAccessBindingsRequest request) = 0;

  virtual google::cloud::Idempotency GetGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          GetGcpUserAccessBindingRequest const& request) = 0;

  virtual google::cloud::Idempotency CreateGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          CreateGcpUserAccessBindingRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          UpdateGcpUserAccessBindingRequest const& request) = 0;

  virtual google::cloud::Idempotency DeleteGcpUserAccessBinding(
      google::identity::accesscontextmanager::v1::
          DeleteGcpUserAccessBindingRequest const& request) = 0;
};

std::unique_ptr<AccessContextManagerConnectionIdempotencyPolicy>
MakeDefaultAccessContextManagerConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_ACCESS_CONTEXT_MANAGER_CONNECTION_IDEMPOTENCY_POLICY_H