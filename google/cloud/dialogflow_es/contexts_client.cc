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
// source: google/cloud/dialogflow/v2/context.proto

#include "google/cloud/dialogflow_es/contexts_client.h"
#include "google/cloud/dialogflow_es/internal/contexts_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContextsClient::ContextsClient(std::shared_ptr<ContextsConnection> connection,
                               Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts), dialogflow_es_internal::ContextsDefaultOptions(
                               connection_->options()))) {}
ContextsClient::~ContextsClient() = default;

StreamRange<google::cloud::dialogflow::v2::Context>
ContextsClient::ListContexts(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::ListContextsRequest request;
  request.set_parent(parent);
  return connection_->ListContexts(request);
}

StreamRange<google::cloud::dialogflow::v2::Context>
ContextsClient::ListContexts(
    google::cloud::dialogflow::v2::ListContextsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListContexts(std::move(request));
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsClient::GetContext(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::GetContextRequest request;
  request.set_name(name);
  return connection_->GetContext(request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsClient::GetContext(
    google::cloud::dialogflow::v2::GetContextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetContext(request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsClient::CreateContext(
    std::string const& parent,
    google::cloud::dialogflow::v2::Context const& context, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::CreateContextRequest request;
  request.set_parent(parent);
  *request.mutable_context() = context;
  return connection_->CreateContext(request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsClient::CreateContext(
    google::cloud::dialogflow::v2::CreateContextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateContext(request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsClient::UpdateContext(
    google::cloud::dialogflow::v2::Context const& context,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::UpdateContextRequest request;
  *request.mutable_context() = context;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateContext(request);
}

StatusOr<google::cloud::dialogflow::v2::Context> ContextsClient::UpdateContext(
    google::cloud::dialogflow::v2::UpdateContextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateContext(request);
}

Status ContextsClient::DeleteContext(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::DeleteContextRequest request;
  request.set_name(name);
  return connection_->DeleteContext(request);
}

Status ContextsClient::DeleteContext(
    google::cloud::dialogflow::v2::DeleteContextRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteContext(request);
}

Status ContextsClient::DeleteAllContexts(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::DeleteAllContextsRequest request;
  request.set_parent(parent);
  return connection_->DeleteAllContexts(request);
}

Status ContextsClient::DeleteAllContexts(
    google::cloud::dialogflow::v2::DeleteAllContextsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAllContexts(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google