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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_WORKFLOW_TEMPLATE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_WORKFLOW_TEMPLATE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dataproc/v1/workflow_templates.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WorkflowTemplateServiceConnectionIdempotencyPolicy {
 public:
  virtual ~WorkflowTemplateServiceConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<WorkflowTemplateServiceConnectionIdempotencyPolicy>
  clone() const = 0;

  virtual google::cloud::Idempotency CreateWorkflowTemplate(
      google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency GetWorkflowTemplate(
      google::cloud::dataproc::v1::GetWorkflowTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency InstantiateWorkflowTemplate(
      google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency InstantiateInlineWorkflowTemplate(
      google::cloud::dataproc::v1::
          InstantiateInlineWorkflowTemplateRequest const& request) = 0;

  virtual google::cloud::Idempotency UpdateWorkflowTemplate(
      google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const&
          request) = 0;

  virtual google::cloud::Idempotency ListWorkflowTemplates(
      google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request) = 0;

  virtual google::cloud::Idempotency DeleteWorkflowTemplate(
      google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const&
          request) = 0;
};

std::unique_ptr<WorkflowTemplateServiceConnectionIdempotencyPolicy>
MakeDefaultWorkflowTemplateServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_WORKFLOW_TEMPLATE_CONNECTION_IDEMPOTENCY_POLICY_H