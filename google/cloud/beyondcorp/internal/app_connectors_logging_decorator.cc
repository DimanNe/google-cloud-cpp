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
// source: google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.proto

#include "google/cloud/beyondcorp/internal/app_connectors_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/beyondcorp/appconnectors/v1/app_connectors_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectorsServiceLogging::AppConnectorsServiceLogging(
    std::shared_ptr<AppConnectorsServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<
    google::cloud::beyondcorp::appconnectors::v1::ListAppConnectorsResponse>
AppConnectorsServiceLogging::ListAppConnectors(
    grpc::ClientContext& context, google::cloud::beyondcorp::appconnectors::v1::
                                      ListAppConnectorsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appconnectors::v1::
                 ListAppConnectorsRequest const& request) {
        return child_->ListAppConnectors(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::beyondcorp::appconnectors::v1::AppConnector>
AppConnectorsServiceLogging::GetAppConnector(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnectors::v1::GetAppConnectorRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::beyondcorp::appconnectors::v1::
                 GetAppConnectorRequest const& request) {
        return child_->GetAppConnector(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceLogging::AsyncCreateAppConnector(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::
        CreateAppConnectorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 CreateAppConnectorRequest const& request) {
        return child_->AsyncCreateAppConnector(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceLogging::AsyncUpdateAppConnector(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::
        UpdateAppConnectorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 UpdateAppConnectorRequest const& request) {
        return child_->AsyncUpdateAppConnector(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceLogging::AsyncDeleteAppConnector(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::
        DeleteAppConnectorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 DeleteAppConnectorRequest const& request) {
        return child_->AsyncDeleteAppConnector(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceLogging::AsyncReportStatus(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnectors::v1::ReportStatusRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::beyondcorp::appconnectors::v1::
                 ReportStatusRequest const& request) {
        return child_->AsyncReportStatus(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectorsServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> AppConnectorsServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google