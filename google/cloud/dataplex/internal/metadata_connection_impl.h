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
// source: google/cloud/dataplex/v1/metadata.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_INTERNAL_METADATA_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_INTERNAL_METADATA_CONNECTION_IMPL_H

#include "google/cloud/dataplex/internal/metadata_retry_traits.h"
#include "google/cloud/dataplex/internal/metadata_stub.h"
#include "google/cloud/dataplex/metadata_connection.h"
#include "google/cloud/dataplex/metadata_connection_idempotency_policy.h"
#include "google/cloud/dataplex/metadata_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetadataServiceConnectionImpl
    : public dataplex::MetadataServiceConnection {
 public:
  ~MetadataServiceConnectionImpl() override = default;

  MetadataServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dataplex_internal::MetadataServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::dataplex::v1::Entity> CreateEntity(
      google::cloud::dataplex::v1::CreateEntityRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entity> UpdateEntity(
      google::cloud::dataplex::v1::UpdateEntityRequest const& request) override;

  Status DeleteEntity(
      google::cloud::dataplex::v1::DeleteEntityRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Entity> GetEntity(
      google::cloud::dataplex::v1::GetEntityRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Entity> ListEntities(
      google::cloud::dataplex::v1::ListEntitiesRequest request) override;

  StatusOr<google::cloud::dataplex::v1::Partition> CreatePartition(
      google::cloud::dataplex::v1::CreatePartitionRequest const& request)
      override;

  Status DeletePartition(
      google::cloud::dataplex::v1::DeletePartitionRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::Partition> GetPartition(
      google::cloud::dataplex::v1::GetPartitionRequest const& request) override;

  StreamRange<google::cloud::dataplex::v1::Partition> ListPartitions(
      google::cloud::dataplex::v1::ListPartitionsRequest request) override;

 private:
  std::unique_ptr<dataplex::MetadataServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dataplex::MetadataServiceRetryPolicyOption>()) {
      return options.get<dataplex::MetadataServiceRetryPolicyOption>()->clone();
    }
    return options_.get<dataplex::MetadataServiceRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dataplex::MetadataServiceBackoffPolicyOption>()) {
      return options.get<dataplex::MetadataServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<dataplex::MetadataServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<dataplex::MetadataServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            dataplex::MetadataServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dataplex::MetadataServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dataplex::MetadataServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dataplex_internal::MetadataServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_INTERNAL_METADATA_CONNECTION_IMPL_H