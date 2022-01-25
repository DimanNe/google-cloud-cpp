// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_CONNECTION_IMPL_H

#include "google/cloud/bigtable/admin/bigtable_instance_admin_connection.h"
#include "google/cloud/bigtable/admin/bigtable_instance_admin_connection_idempotency_policy.h"
#include "google/cloud/bigtable/admin/bigtable_instance_admin_options.h"
#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_retry_traits.h"
#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BigtableInstanceAdminConnectionImpl
    : public bigtable_admin::BigtableInstanceAdminConnection {
 public:
  ~BigtableInstanceAdminConnectionImpl() override = default;

  BigtableInstanceAdminConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<bigtable_admin_internal::BigtableInstanceAdminStub> stub,
      Options const& options);

  future<StatusOr<google::bigtable::admin::v2::Instance>> CreateInstance(
      google::bigtable::admin::v2::CreateInstanceRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Instance> GetInstance(
      google::bigtable::admin::v2::GetInstanceRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListInstancesResponse> ListInstances(
      google::bigtable::admin::v2::ListInstancesRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Instance> UpdateInstance(
      google::bigtable::admin::v2::Instance const& request) override;

  future<StatusOr<google::bigtable::admin::v2::Instance>> PartialUpdateInstance(
      google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request)
      override;

  Status DeleteInstance(
      google::bigtable::admin::v2::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::bigtable::admin::v2::Cluster>> CreateCluster(
      google::bigtable::admin::v2::CreateClusterRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::Cluster> GetCluster(
      google::bigtable::admin::v2::GetClusterRequest const& request) override;

  StatusOr<google::bigtable::admin::v2::ListClustersResponse> ListClusters(
      google::bigtable::admin::v2::ListClustersRequest const& request) override;

  future<StatusOr<google::bigtable::admin::v2::Cluster>> UpdateCluster(
      google::bigtable::admin::v2::Cluster const& request) override;

  future<StatusOr<google::bigtable::admin::v2::Cluster>> PartialUpdateCluster(
      google::bigtable::admin::v2::PartialUpdateClusterRequest const& request)
      override;

  Status DeleteCluster(google::bigtable::admin::v2::DeleteClusterRequest const&
                           request) override;

  StatusOr<google::bigtable::admin::v2::AppProfile> CreateAppProfile(
      google::bigtable::admin::v2::CreateAppProfileRequest const& request)
      override;

  StatusOr<google::bigtable::admin::v2::AppProfile> GetAppProfile(
      google::bigtable::admin::v2::GetAppProfileRequest const& request)
      override;

  StreamRange<google::bigtable::admin::v2::AppProfile> ListAppProfiles(
      google::bigtable::admin::v2::ListAppProfilesRequest request) override;

  future<StatusOr<google::bigtable::admin::v2::AppProfile>> UpdateAppProfile(
      google::bigtable::admin::v2::UpdateAppProfileRequest const& request)
      override;

  Status DeleteAppProfile(
      google::bigtable::admin::v2::DeleteAppProfileRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<bigtable_admin::BigtableInstanceAdminRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<bigtable_admin::BigtableInstanceAdminRetryPolicyOption>()) {
      return options
          .get<bigtable_admin::BigtableInstanceAdminRetryPolicyOption>()
          ->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<bigtable_admin::BigtableInstanceAdminBackoffPolicyOption>()) {
      return options
          .get<bigtable_admin::BigtableInstanceAdminBackoffPolicyOption>()
          ->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<
      bigtable_admin::BigtableInstanceAdminConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            bigtable_admin::
                BigtableInstanceAdminConnectionIdempotencyPolicyOption>()) {
      return options
          .get<bigtable_admin::
                   BigtableInstanceAdminConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<bigtable_admin_internal::BigtableInstanceAdminStub> stub_;
  std::unique_ptr<bigtable_admin::BigtableInstanceAdminRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<
      bigtable_admin::BigtableInstanceAdminConnectionIdempotencyPolicy>
      idempotency_policy_;

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<bigtable_admin::BigtableInstanceAdminPollingPolicyOption>()) {
      return options
          .get<bigtable_admin::BigtableInstanceAdminPollingPolicyOption>()
          ->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGTABLE_ADMIN_INTERNAL_BIGTABLE_INSTANCE_ADMIN_CONNECTION_IMPL_H