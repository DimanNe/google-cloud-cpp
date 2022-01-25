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
// source: google/devtools/artifactregistry/v1/service.proto

#include "google/cloud/artifactregistry/artifact_registry_client.h"
#include "google/cloud/artifactregistry/internal/artifact_registry_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ArtifactRegistryClient::ArtifactRegistryClient(
    std::shared_ptr<ArtifactRegistryConnection> connection, Options options)
    : connection_(std::move(connection)),
      options_(artifactregistry_internal::ArtifactRegistryDefaultOptions(
          std::move(options))) {}
ArtifactRegistryClient::~ArtifactRegistryClient() = default;

StreamRange<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryClient::ListDockerImages(std::string const& parent,
                                         Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::devtools::artifactregistry::v1::ListDockerImagesRequest request;
  request.set_parent(parent);
  return connection_->ListDockerImages(request);
}

StreamRange<google::devtools::artifactregistry::v1::DockerImage>
ArtifactRegistryClient::ListDockerImages(
    google::devtools::artifactregistry::v1::ListDockerImagesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListDockerImages(std::move(request));
}

StreamRange<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryClient::ListRepositories(std::string const& parent,
                                         Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::devtools::artifactregistry::v1::ListRepositoriesRequest request;
  request.set_parent(parent);
  return connection_->ListRepositories(request);
}

StreamRange<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryClient::ListRepositories(
    google::devtools::artifactregistry::v1::ListRepositoriesRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListRepositories(std::move(request));
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryClient::GetRepository(std::string const& name,
                                      Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::devtools::artifactregistry::v1::GetRepositoryRequest request;
  request.set_name(name);
  return connection_->GetRepository(request);
}

StatusOr<google::devtools::artifactregistry::v1::Repository>
ArtifactRegistryClient::GetRepository(
    google::devtools::artifactregistry::v1::GetRepositoryRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetRepository(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry
}  // namespace cloud
}  // namespace google