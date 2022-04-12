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
// source: google/cloud/dialogflow/v2/answer_record.proto

#include "google/cloud/dialogflow_es/answer_records_connection.h"
#include "google/cloud/dialogflow_es/answer_records_options.h"
#include "google/cloud/dialogflow_es/internal/answer_records_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/answer_records_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/answer_records_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AnswerRecordsConnection::~AnswerRecordsConnection() = default;

StreamRange<google::cloud::dialogflow::v2::AnswerRecord>
AnswerRecordsConnection::ListAnswerRecords(
    google::cloud::dialogflow::v2::
        ListAnswerRecordsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::AnswerRecord>>();
}

StatusOr<google::cloud::dialogflow::v2::AnswerRecord>
AnswerRecordsConnection::UpdateAnswerRecord(
    google::cloud::dialogflow::v2::UpdateAnswerRecordRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AnswerRecordsConnection> MakeAnswerRecordsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AnswerRecordsPolicyOptionList>(options,
                                                                __func__);
  options =
      dialogflow_es_internal::AnswerRecordsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_es_internal::CreateDefaultAnswerRecordsStub(
      background->cq(), options);
  return std::make_shared<dialogflow_es_internal::AnswerRecordsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<dialogflow_es::AnswerRecordsConnection>
MakeAnswerRecordsConnection(std::shared_ptr<AnswerRecordsStub> stub,
                            Options options) {
  options = AnswerRecordsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<dialogflow_es_internal::AnswerRecordsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google