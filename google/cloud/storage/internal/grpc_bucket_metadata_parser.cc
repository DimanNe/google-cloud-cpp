// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/grpc_bucket_metadata_parser.h"
#include "google/cloud/storage/version.h"
#include "google/cloud/internal/time_utils.h"
#include "absl/algorithm/container.h"
#include "absl/time/civil_time.h"

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

absl::CivilDay ToCivilDay(google::type::Date const& date) {
  return absl::CivilDay(date.year(), date.month(), date.day());
}

google::type::Date ToProtoDate(absl::CivilDay d) {
  google::type::Date date;
  date.set_year(static_cast<std::int32_t>(d.year()));
  date.set_month(d.month());
  date.set_day(d.day());
  return date;
}

}  // namespace

google::storage::v2::Bucket::Billing GrpcBucketMetadataParser::ToProto(
    BucketBilling const& rhs) {
  google::storage::v2::Bucket::Billing result;
  result.set_requester_pays(rhs.requester_pays);
  return result;
}

BucketBilling GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Billing const& rhs) {
  BucketBilling result;
  result.requester_pays = rhs.requester_pays();
  return result;
}

google::storage::v2::Bucket::Cors GrpcBucketMetadataParser::ToProto(
    CorsEntry const& rhs) {
  google::storage::v2::Bucket::Cors result;
  for (auto const& v : rhs.origin) {
    result.add_origin(v);
  }
  for (auto const& v : rhs.method) {
    result.add_method(v);
  }
  for (auto const& v : rhs.response_header) {
    result.add_response_header(v);
  }
  if (rhs.max_age_seconds.has_value()) {
    result.set_max_age_seconds(static_cast<std::int32_t>(*rhs.max_age_seconds));
  }
  return result;
}

CorsEntry GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Cors const& rhs) {
  CorsEntry result;
  absl::c_copy(rhs.origin(), std::back_inserter(result.origin));
  absl::c_copy(rhs.method(), std::back_inserter(result.method));
  absl::c_copy(rhs.response_header(),
               std::back_inserter(result.response_header));
  result.max_age_seconds = rhs.max_age_seconds();
  return result;
}

google::storage::v2::Bucket::Encryption GrpcBucketMetadataParser::ToProto(
    BucketEncryption const& rhs) {
  google::storage::v2::Bucket::Encryption result;
  result.set_default_kms_key(rhs.default_kms_key_name);
  return result;
}

BucketEncryption GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Encryption const& rhs) {
  BucketEncryption result;
  result.default_kms_key_name = rhs.default_kms_key();
  return result;
}

google::storage::v2::Bucket::IamConfig GrpcBucketMetadataParser::ToProto(
    BucketIamConfiguration const& rhs) {
  google::storage::v2::Bucket::IamConfig result;
  if (rhs.uniform_bucket_level_access.has_value()) {
    auto& ubla = *result.mutable_uniform_bucket_level_access();
    *ubla.mutable_lock_time() = google::cloud::internal::ToProtoTimestamp(
        rhs.uniform_bucket_level_access->locked_time);
    ubla.set_enabled(rhs.uniform_bucket_level_access->enabled);
  }
  return result;
}

BucketIamConfiguration GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::IamConfig const& rhs) {
  BucketIamConfiguration result;
  if (rhs.has_uniform_bucket_level_access()) {
    UniformBucketLevelAccess ubla;
    ubla.enabled = rhs.uniform_bucket_level_access().enabled();
    ubla.locked_time = google::cloud::internal::ToChronoTimePoint(
        rhs.uniform_bucket_level_access().lock_time());
    result.uniform_bucket_level_access = std::move(ubla);
  }
  return result;
}

google::storage::v2::Bucket::Lifecycle::Rule::Action
GrpcBucketMetadataParser::ToProto(LifecycleRuleAction rhs) {
  google::storage::v2::Bucket::Lifecycle::Rule::Action result;
  result.set_type(std::move(rhs.type));
  result.set_storage_class(std::move(rhs.storage_class));
  return result;
}

LifecycleRuleAction GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Lifecycle::Rule::Action rhs) {
  LifecycleRuleAction result;
  result.type = std::move(*rhs.mutable_type());
  result.storage_class = std::move(*rhs.mutable_storage_class());
  return result;
}

google::storage::v2::Bucket::Lifecycle::Rule::Condition
GrpcBucketMetadataParser::ToProto(LifecycleRuleCondition rhs) {
  google::storage::v2::Bucket::Lifecycle::Rule::Condition result;
  if (rhs.age.has_value()) {
    result.set_age_days(*rhs.age);
  }
  if (rhs.created_before.has_value()) {
    *result.mutable_created_before() = ToProtoDate(*rhs.created_before);
  }
  if (rhs.is_live.has_value()) {
    result.set_is_live(*rhs.is_live);
  }
  if (rhs.num_newer_versions.has_value()) {
    result.set_num_newer_versions(*rhs.num_newer_versions);
  }
  if (rhs.matches_storage_class.has_value()) {
    for (auto& v : *rhs.matches_storage_class) {
      *result.add_matches_storage_class() = std::move(v);
    }
  }
  return result;
}

LifecycleRuleCondition GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Lifecycle::Rule::Condition rhs) {
  LifecycleRuleCondition result;
  if (rhs.age_days() != 0) {
    result.age = rhs.age_days();
  }
  if (rhs.has_created_before()) {
    result.created_before = ToCivilDay(rhs.created_before());
  }
  if (rhs.has_is_live()) {
    result.is_live = rhs.is_live();
  }
  if (rhs.num_newer_versions() != 0) {
    result.num_newer_versions = rhs.num_newer_versions();
  }
  if (rhs.matches_storage_class_size() != 0) {
    std::vector<std::string> tmp;
    for (auto& v : *rhs.mutable_matches_storage_class()) {
      tmp.push_back(std::move(v));
    }
    result.matches_storage_class = std::move(tmp);
  }
  return result;
}

google::storage::v2::Bucket::Lifecycle::Rule GrpcBucketMetadataParser::ToProto(
    LifecycleRule rhs) {
  google::storage::v2::Bucket::Lifecycle::Rule result;
  *result.mutable_action() = ToProto(std::move(rhs.action_));
  *result.mutable_condition() = ToProto(std::move(rhs.condition_));
  return result;
}

LifecycleRule GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Lifecycle::Rule rhs) {
  LifecycleRuleAction action;
  LifecycleRuleCondition condition;
  if (rhs.has_action()) {
    action = FromProto(std::move(*rhs.mutable_action()));
  }
  if (rhs.has_condition()) {
    condition = FromProto(std::move(*rhs.mutable_condition()));
  }
  return LifecycleRule(std::move(condition), std::move(action));
}

google::storage::v2::Bucket::Lifecycle GrpcBucketMetadataParser::ToProto(
    BucketLifecycle rhs) {
  google::storage::v2::Bucket::Lifecycle result;
  for (auto& v : rhs.rule) {
    *result.add_rule() = ToProto(std::move(v));
  }
  return result;
}

BucketLifecycle GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Lifecycle rhs) {
  BucketLifecycle result;
  for (auto& v : *rhs.mutable_rule()) {
    result.rule.push_back(FromProto(std::move(v)));
  }
  return result;
}

google::storage::v2::Bucket::Logging GrpcBucketMetadataParser::ToProto(
    BucketLogging const& rhs) {
  google::storage::v2::Bucket::Logging result;
  result.set_log_bucket(rhs.log_bucket);
  result.set_log_object_prefix(rhs.log_object_prefix);
  return result;
}

BucketLogging GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Logging const& rhs) {
  BucketLogging result;
  result.log_bucket = rhs.log_bucket();
  result.log_object_prefix = rhs.log_object_prefix();
  return result;
}

google::storage::v2::Bucket::RetentionPolicy GrpcBucketMetadataParser::ToProto(
    BucketRetentionPolicy const& rhs) {
  google::storage::v2::Bucket::RetentionPolicy result;
  *result.mutable_effective_time() =
      google::cloud::internal::ToProtoTimestamp(rhs.effective_time);
  result.set_is_locked(rhs.is_locked);
  result.set_retention_period(rhs.retention_period.count());
  return result;
}

BucketRetentionPolicy GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::RetentionPolicy const& rhs) {
  BucketRetentionPolicy result;
  result.effective_time =
      google::cloud::internal::ToChronoTimePoint(rhs.effective_time());
  result.is_locked = rhs.is_locked();
  result.retention_period = std::chrono::seconds(rhs.retention_period());
  return result;
}

google::storage::v2::Bucket::Versioning GrpcBucketMetadataParser::ToProto(
    BucketVersioning const& rhs) {
  google::storage::v2::Bucket::Versioning result;
  result.set_enabled(rhs.enabled);
  return result;
}

BucketVersioning GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Versioning const& rhs) {
  BucketVersioning result;
  result.enabled = rhs.enabled();
  return result;
}

google::storage::v2::Bucket::Website GrpcBucketMetadataParser::ToProto(
    BucketWebsite rhs) {
  google::storage::v2::Bucket::Website result;
  result.set_main_page_suffix(std::move(rhs.main_page_suffix));
  result.set_not_found_page(std::move(rhs.not_found_page));
  return result;
}

BucketWebsite GrpcBucketMetadataParser::FromProto(
    google::storage::v2::Bucket::Website rhs) {
  BucketWebsite result;
  result.main_page_suffix = std::move(*rhs.mutable_main_page_suffix());
  result.not_found_page = std::move(*rhs.mutable_not_found_page());
  return result;
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google