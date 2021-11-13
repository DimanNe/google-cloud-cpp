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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_option_defaults.h"
#include "google/cloud/bigtable/admin/bigtable_table_admin_connection.h"
#include "google/cloud/bigtable/admin/bigtable_table_admin_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/connection_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/user_agent_prefix.h"
#include "google/cloud/options.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options BigtableTableAdminDefaultOptions(Options options) {
  if (!options.has<EndpointOption>()) {
    auto env =
        internal::GetEnv("GOOGLE_CLOUD_CPP_BIGTABLE_TABLE_ADMIN_ENDPOINT");
    options.set<EndpointOption>(
        env && !env->empty() ? *env : "bigtableadmin.googleapis.com");
  }
  if (auto emulator = internal::GetEnv("BIGTABLE_EMULATOR_HOST")) {
    options.set<EndpointOption>(*emulator).set<GrpcCredentialOption>(
        grpc::InsecureChannelCredentials());
  }
  if (!options.has<GrpcCredentialOption>()) {
    options.set<GrpcCredentialOption>(grpc::GoogleDefaultCredentials());
  }
  if (!options.has<TracingComponentsOption>()) {
    options.set<TracingComponentsOption>(internal::DefaultTracingComponents());
  }
  if (!options.has<GrpcTracingOptionsOption>()) {
    options.set<GrpcTracingOptionsOption>(internal::DefaultTracingOptions());
  }
  auto& products = options.lookup<UserAgentProductsOption>();
  products.insert(products.begin(), google::cloud::internal::UserAgentPrefix());

  if (!options.has<bigtable_admin::BigtableTableAdminRetryPolicyOption>()) {
    options.set<bigtable_admin::BigtableTableAdminRetryPolicyOption>(
        bigtable_admin::BigtableTableAdminLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<bigtable_admin::BigtableTableAdminBackoffPolicyOption>()) {
    options.set<bigtable_admin::BigtableTableAdminBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<bigtable_admin::BigtableTableAdminPollingPolicyOption>()) {
    options.set<bigtable_admin::BigtableTableAdminPollingPolicyOption>(
        GenericPollingPolicy<
            bigtable_admin::BigtableTableAdminRetryPolicyOption::Type,
            bigtable_admin::BigtableTableAdminBackoffPolicyOption::Type>(
            options.get<bigtable_admin::BigtableTableAdminRetryPolicyOption>()
                ->clone(),
            options
                .get<bigtable_admin::BigtableTableAdminBackoffPolicyOption>()
                ->clone())
            .clone());
  }
  if (!options.has<bigtable_admin::
                       BigtableTableAdminConnectionIdempotencyPolicyOption>()) {
    options.set<
        bigtable_admin::BigtableTableAdminConnectionIdempotencyPolicyOption>(
        bigtable_admin::
            MakeDefaultBigtableTableAdminConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google