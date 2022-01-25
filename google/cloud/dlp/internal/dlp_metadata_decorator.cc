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
// source: google/privacy/dlp/v2/dlp.proto

#include "google/cloud/dlp/internal/dlp_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dlp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DlpServiceMetadata::DlpServiceMetadata(std::shared_ptr<DlpServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceMetadata::InspectContent(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::InspectContentRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->InspectContent(context, request);
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceMetadata::RedactImage(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::RedactImageRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->RedactImage(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceMetadata::DeidentifyContent(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeidentifyContentRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->DeidentifyContent(context, request);
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceMetadata::ReidentifyContent(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ReidentifyContentRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ReidentifyContent(context, request);
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceMetadata::ListInfoTypes(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListInfoTypesRequest const& request) {
  SetMetadata(context, {});
  return child_->ListInfoTypes(context, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceMetadata::CreateInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateInspectTemplateRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceMetadata::UpdateInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceMetadata::GetInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetInspectTemplateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
DlpServiceMetadata::ListInspectTemplates(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListInspectTemplatesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListInspectTemplates(context, request);
}

Status DlpServiceMetadata::DeleteInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceMetadata::CreateDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceMetadata::UpdateDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceMetadata::GetDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
DlpServiceMetadata::ListDeidentifyTemplates(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDeidentifyTemplates(context, request);
}

Status DlpServiceMetadata::DeleteDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceMetadata::CreateJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateJobTriggerRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceMetadata::UpdateJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceMetadata::HybridInspectJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->HybridInspectJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceMetadata::GetJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetJobTriggerRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse>
DlpServiceMetadata::ListJobTriggers(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListJobTriggersRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListJobTriggers(context, request);
}

Status DlpServiceMetadata::DeleteJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob>
DlpServiceMetadata::ActivateJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ActivateJobTriggerRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ActivateJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceMetadata::CreateDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateDlpJobRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateDlpJob(context, request);
}

StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse>
DlpServiceMetadata::ListDlpJobs(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListDlpJobsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDlpJobs(context, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceMetadata::GetDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetDlpJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDlpJob(context, request);
}

Status DlpServiceMetadata::DeleteDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteDlpJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteDlpJob(context, request);
}

Status DlpServiceMetadata::CancelDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CancelDlpJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->CancelDlpJob(context, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceMetadata::CreateStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceMetadata::UpdateStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceMetadata::GetStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
DlpServiceMetadata::ListStoredInfoTypes(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListStoredInfoTypes(context, request);
}

Status DlpServiceMetadata::DeleteStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceMetadata::HybridInspectDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->HybridInspectDlpJob(context, request);
}

Status DlpServiceMetadata::FinishDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::FinishDlpJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->FinishDlpJob(context, request);
}

void DlpServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                     std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DlpServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_internal
}  // namespace cloud
}  // namespace google