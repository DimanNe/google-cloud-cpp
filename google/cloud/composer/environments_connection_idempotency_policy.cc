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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/environments_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace composer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EnvironmentsConnectionIdempotencyPolicy::
    ~EnvironmentsConnectionIdempotencyPolicy() = default;

namespace {
class DefaultEnvironmentsConnectionIdempotencyPolicy
    : public EnvironmentsConnectionIdempotencyPolicy {
 public:
  ~DefaultEnvironmentsConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultEnvironmentsConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency CreateEnvironment(
      google::cloud::orchestration::airflow::service::v1::
          CreateEnvironmentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetEnvironment(google::cloud::orchestration::airflow::service::
                                 v1::GetEnvironmentRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListEnvironments(google::cloud::orchestration::airflow::service::
                                   v1::ListEnvironmentsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency UpdateEnvironment(
      google::cloud::orchestration::airflow::service::v1::
          UpdateEnvironmentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteEnvironment(
      google::cloud::orchestration::airflow::service::v1::
          DeleteEnvironmentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy>
MakeDefaultEnvironmentsConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultEnvironmentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer
}  // namespace cloud
}  // namespace google