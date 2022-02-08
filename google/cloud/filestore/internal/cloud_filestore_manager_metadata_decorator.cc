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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#include "google/cloud/filestore/internal/cloud_filestore_manager_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/filestore/v1/cloud_filestore_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace filestore_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudFilestoreManagerMetadata::CloudFilestoreManagerMetadata(
    std::shared_ptr<CloudFilestoreManagerStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::filestore::v1::ListInstancesResponse>
CloudFilestoreManagerMetadata::ListInstances(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::ListInstancesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListInstances(context, request);
}

StatusOr<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerMetadata::GetInstance(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::GetInstanceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetInstance(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::filestore::v1::CreateInstanceRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::filestore::v1::UpdateInstanceRequest const& request) {
  SetMetadata(*context, "instance.name=" + request.instance().name());
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncRestoreInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::filestore::v1::RestoreInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncRestoreInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncDeleteInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::filestore::v1::DeleteInstanceRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteInstance(cq, std::move(context), request);
}

StatusOr<google::cloud::filestore::v1::ListBackupsResponse>
CloudFilestoreManagerMetadata::ListBackups(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::ListBackupsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListBackups(context, request);
}

StatusOr<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerMetadata::GetBackup(
    grpc::ClientContext& context,
    google::cloud::filestore::v1::GetBackupRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetBackup(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::filestore::v1::CreateBackupRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateBackup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::filestore::v1::DeleteBackupRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteBackup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::filestore::v1::UpdateBackupRequest const& request) {
  SetMetadata(*context, "backup.name=" + request.backup().name());
  return child_->AsyncUpdateBackup(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFilestoreManagerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> CloudFilestoreManagerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void CloudFilestoreManagerMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void CloudFilestoreManagerMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_internal
}  // namespace cloud
}  // namespace google