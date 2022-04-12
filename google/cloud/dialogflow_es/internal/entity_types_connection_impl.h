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
// source: google/cloud/dialogflow/v2/entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_CONNECTION_IMPL_H

#include "google/cloud/dialogflow_es/entity_types_connection.h"
#include "google/cloud/dialogflow_es/entity_types_connection_idempotency_policy.h"
#include "google/cloud/dialogflow_es/entity_types_options.h"
#include "google/cloud/dialogflow_es/internal/entity_types_retry_traits.h"
#include "google/cloud/dialogflow_es/internal/entity_types_stub.h"
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
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EntityTypesConnectionImpl : public dialogflow_es::EntityTypesConnection {
 public:
  ~EntityTypesConnectionImpl() override = default;

  EntityTypesConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<dialogflow_es_internal::EntityTypesStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::dialogflow::v2::EntityType> ListEntityTypes(
      google::cloud::dialogflow::v2::ListEntityTypesRequest request) override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> GetEntityType(
      google::cloud::dialogflow::v2::GetEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> CreateEntityType(
      google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::EntityType> UpdateEntityType(
      google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request)
      override;

  Status DeleteEntityType(
      google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request)
      override;

  future<
      StatusOr<google::cloud::dialogflow::v2::BatchUpdateEntityTypesResponse>>
  BatchUpdateEntityTypes(
      google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
          request) override;

  future<StatusOr<google::protobuf::Struct>> BatchDeleteEntityTypes(
      google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
          request) override;

  future<StatusOr<google::protobuf::Struct>> BatchCreateEntities(
      google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> BatchUpdateEntities(
      google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request)
      override;

  future<StatusOr<google::protobuf::Struct>> BatchDeleteEntities(
      google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request)
      override;

 private:
  std::unique_ptr<dialogflow_es::EntityTypesRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::EntityTypesRetryPolicyOption>()) {
      return options.get<dialogflow_es::EntityTypesRetryPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::EntityTypesRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::EntityTypesBackoffPolicyOption>()) {
      return options.get<dialogflow_es::EntityTypesBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::EntityTypesBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<dialogflow_es::EntityTypesConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            dialogflow_es::EntityTypesConnectionIdempotencyPolicyOption>()) {
      return options
          .get<dialogflow_es::EntityTypesConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<dialogflow_es::EntityTypesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<dialogflow_es::EntityTypesPollingPolicyOption>()) {
      return options.get<dialogflow_es::EntityTypesPollingPolicyOption>()
          ->clone();
    }
    return options_.get<dialogflow_es::EntityTypesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<dialogflow_es_internal::EntityTypesStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_ENTITY_TYPES_CONNECTION_IMPL_H