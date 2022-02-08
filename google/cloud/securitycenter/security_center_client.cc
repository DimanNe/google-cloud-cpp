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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/security_center_client.h"
#include "google/cloud/securitycenter/internal/security_center_option_defaults.h"
#include "google/cloud/securitycenter/security_center_options.h"
#include <memory>
#include <thread>

namespace google {
namespace cloud {
namespace securitycenter {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterClient::SecurityCenterClient(
    std::shared_ptr<SecurityCenterConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(
          std::move(opts),
          securitycenter_internal::SecurityCenterDefaultOptions(
              connection_->options()))) {}
SecurityCenterClient::~SecurityCenterClient() = default;

future<StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>
SecurityCenterClient::BulkMuteFindings(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::BulkMuteFindingsRequest request;
  request.set_parent(parent);
  return connection_->BulkMuteFindings(request);
}

future<StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>
SecurityCenterClient::BulkMuteFindings(
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BulkMuteFindings(request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::CreateSource(
    std::string const& parent,
    google::cloud::securitycenter::v1::Source const& source, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::CreateSourceRequest request;
  request.set_parent(parent);
  *request.mutable_source() = source;
  return connection_->CreateSource(request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::CreateSource(
    google::cloud::securitycenter::v1::CreateSourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSource(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::CreateFinding(
    std::string const& parent, std::string const& finding_id,
    google::cloud::securitycenter::v1::Finding const& finding, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::CreateFindingRequest request;
  request.set_parent(parent);
  request.set_finding_id(finding_id);
  *request.mutable_finding() = finding;
  return connection_->CreateFinding(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::CreateFinding(
    google::cloud::securitycenter::v1::CreateFindingRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFinding(request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::CreateMuteConfig(
    std::string const& parent,
    google::cloud::securitycenter::v1::MuteConfig const& mute_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::CreateMuteConfigRequest request;
  request.set_parent(parent);
  *request.mutable_mute_config() = mute_config;
  return connection_->CreateMuteConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::CreateMuteConfig(
    std::string const& parent,
    google::cloud::securitycenter::v1::MuteConfig const& mute_config,
    std::string const& mute_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::CreateMuteConfigRequest request;
  request.set_parent(parent);
  *request.mutable_mute_config() = mute_config;
  request.set_mute_config_id(mute_config_id);
  return connection_->CreateMuteConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::CreateMuteConfig(
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateMuteConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::CreateNotificationConfig(
    std::string const& parent, std::string const& config_id,
    google::cloud::securitycenter::v1::NotificationConfig const&
        notification_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::CreateNotificationConfigRequest request;
  request.set_parent(parent);
  request.set_config_id(config_id);
  *request.mutable_notification_config() = notification_config;
  return connection_->CreateNotificationConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::CreateNotificationConfig(
    std::string const& parent,
    google::cloud::securitycenter::v1::NotificationConfig const&
        notification_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::CreateNotificationConfigRequest request;
  request.set_parent(parent);
  *request.mutable_notification_config() = notification_config;
  return connection_->CreateNotificationConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::CreateNotificationConfig(
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateNotificationConfig(request);
}

Status SecurityCenterClient::DeleteMuteConfig(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::DeleteMuteConfigRequest request;
  request.set_name(name);
  return connection_->DeleteMuteConfig(request);
}

Status SecurityCenterClient::DeleteMuteConfig(
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteMuteConfig(request);
}

Status SecurityCenterClient::DeleteNotificationConfig(std::string const& name,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::DeleteNotificationConfigRequest request;
  request.set_name(name);
  return connection_->DeleteNotificationConfig(request);
}

Status SecurityCenterClient::DeleteNotificationConfig(
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteNotificationConfig(request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterClient::GetIamPolicy(
    std::string const& resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest request;
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::GetMuteConfig(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::GetMuteConfigRequest request;
  request.set_name(name);
  return connection_->GetMuteConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::GetMuteConfig(
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetMuteConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::GetNotificationConfig(std::string const& name,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::GetNotificationConfigRequest request;
  request.set_name(name);
  return connection_->GetNotificationConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::GetNotificationConfig(
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetNotificationConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterClient::GetOrganizationSettings(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::GetOrganizationSettingsRequest request;
  request.set_name(name);
  return connection_->GetOrganizationSettings(request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterClient::GetOrganizationSettings(
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOrganizationSettings(request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::GetSource(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::GetSourceRequest request;
  request.set_name(name);
  return connection_->GetSource(request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::GetSource(
    google::cloud::securitycenter::v1::GetSourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSource(request);
}

StreamRange<google::cloud::securitycenter::v1::GroupResult>
SecurityCenterClient::GroupAssets(
    google::cloud::securitycenter::v1::GroupAssetsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GroupAssets(std::move(request));
}

StreamRange<google::cloud::securitycenter::v1::GroupResult>
SecurityCenterClient::GroupFindings(std::string const& parent,
                                    std::string const& group_by, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::GroupFindingsRequest request;
  request.set_parent(parent);
  request.set_group_by(group_by);
  return connection_->GroupFindings(request);
}

StreamRange<google::cloud::securitycenter::v1::GroupResult>
SecurityCenterClient::GroupFindings(
    google::cloud::securitycenter::v1::GroupFindingsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GroupFindings(std::move(request));
}

StreamRange<
    google::cloud::securitycenter::v1::ListAssetsResponse::ListAssetsResult>
SecurityCenterClient::ListAssets(
    google::cloud::securitycenter::v1::ListAssetsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAssets(std::move(request));
}

StreamRange<
    google::cloud::securitycenter::v1::ListFindingsResponse::ListFindingsResult>
SecurityCenterClient::ListFindings(
    google::cloud::securitycenter::v1::ListFindingsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFindings(std::move(request));
}

StreamRange<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::ListMuteConfigs(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::ListMuteConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListMuteConfigs(request);
}

StreamRange<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::ListMuteConfigs(
    google::cloud::securitycenter::v1::ListMuteConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMuteConfigs(std::move(request));
}

StreamRange<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::ListNotificationConfigs(std::string const& parent,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::ListNotificationConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListNotificationConfigs(request);
}

StreamRange<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::ListNotificationConfigs(
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListNotificationConfigs(std::move(request));
}

StreamRange<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::ListSources(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::ListSourcesRequest request;
  request.set_parent(parent);
  return connection_->ListSources(request);
}

StreamRange<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::ListSources(
    google::cloud::securitycenter::v1::ListSourcesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSources(std::move(request));
}

future<StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>
SecurityCenterClient::RunAssetDiscovery(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::RunAssetDiscoveryRequest request;
  request.set_parent(parent);
  return connection_->RunAssetDiscovery(request);
}

future<StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>
SecurityCenterClient::RunAssetDiscovery(
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunAssetDiscovery(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::SetFindingState(
    std::string const& name,
    google::cloud::securitycenter::v1::Finding::State state,
    google::protobuf::Timestamp const& start_time, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::SetFindingStateRequest request;
  request.set_name(name);
  request.set_state(state);
  *request.mutable_start_time() = start_time;
  return connection_->SetFindingState(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::SetFindingState(
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetFindingState(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::SetMute(
    std::string const& name,
    google::cloud::securitycenter::v1::Finding::Mute mute, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::SetMuteRequest request;
  request.set_name(name);
  request.set_mute(mute);
  return connection_->SetMute(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::SetMute(
    google::cloud::securitycenter::v1::SetMuteRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetMute(request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterClient::SetIamPolicy(
    std::string const& resource, google::iam::v1::Policy const& policy,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::SetIamPolicyRequest request;
  request.set_resource(resource);
  *request.mutable_policy() = policy;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterClient::SetIamPolicy(
    std::string const& resource, IamUpdater const& updater, Options opts) {
  internal::CheckExpectedOptions<SecurityCenterBackoffPolicyOption>(opts,
                                                                    __func__);
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::GetIamPolicyRequest get_request;
  get_request.set_resource(resource);
  google::iam::v1::SetIamPolicyRequest set_request;
  set_request.set_resource(resource);
  auto backoff_policy = internal::CurrentOptions()
                            .get<SecurityCenterBackoffPolicyOption>()
                            ->clone();
  for (;;) {
    auto recent = connection_->GetIamPolicy(get_request);
    if (!recent) {
      return recent.status();
    }
    auto policy = updater(*std::move(recent));
    if (!policy) {
      return Status(StatusCode::kCancelled, "updater did not yield a policy");
    }
    *set_request.mutable_policy() = *std::move(policy);
    auto result = connection_->SetIamPolicy(set_request);
    if (result || result.status().code() != StatusCode::kAborted) {
      return result;
    }
    std::this_thread::sleep_for(backoff_policy->OnCompletion());
  }
}

StatusOr<google::iam::v1::Policy> SecurityCenterClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterClient::TestIamPermissions(
    std::string const& resource, std::vector<std::string> const& permissions,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::iam::v1::TestIamPermissionsRequest request;
  request.set_resource(resource);
  *request.mutable_permissions() = {permissions.begin(), permissions.end()};
  return connection_->TestIamPermissions(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterClient::UpdateExternalSystem(
    google::cloud::securitycenter::v1::ExternalSystem const& external_system,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateExternalSystemRequest request;
  *request.mutable_external_system() = external_system;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateExternalSystem(request);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterClient::UpdateExternalSystem(
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateExternalSystem(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::UpdateFinding(
    google::cloud::securitycenter::v1::Finding const& finding, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateFindingRequest request;
  *request.mutable_finding() = finding;
  return connection_->UpdateFinding(request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterClient::UpdateFinding(
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFinding(request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::UpdateMuteConfig(
    google::cloud::securitycenter::v1::MuteConfig const& mute_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateMuteConfigRequest request;
  *request.mutable_mute_config() = mute_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateMuteConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterClient::UpdateMuteConfig(
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateMuteConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::UpdateNotificationConfig(
    google::cloud::securitycenter::v1::NotificationConfig const&
        notification_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateNotificationConfigRequest request;
  *request.mutable_notification_config() = notification_config;
  return connection_->UpdateNotificationConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::UpdateNotificationConfig(
    google::cloud::securitycenter::v1::NotificationConfig const&
        notification_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateNotificationConfigRequest request;
  *request.mutable_notification_config() = notification_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateNotificationConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterClient::UpdateNotificationConfig(
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateNotificationConfig(request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterClient::UpdateOrganizationSettings(
    google::cloud::securitycenter::v1::OrganizationSettings const&
        organization_settings,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest request;
  *request.mutable_organization_settings() = organization_settings;
  return connection_->UpdateOrganizationSettings(request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterClient::UpdateOrganizationSettings(
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateOrganizationSettings(request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::UpdateSource(
    google::cloud::securitycenter::v1::Source const& source, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateSourceRequest request;
  *request.mutable_source() = source;
  return connection_->UpdateSource(request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterClient::UpdateSource(
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSource(request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterClient::UpdateSecurityMarks(
    google::cloud::securitycenter::v1::SecurityMarks const& security_marks,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::securitycenter::v1::UpdateSecurityMarksRequest request;
  *request.mutable_security_marks() = security_marks;
  return connection_->UpdateSecurityMarks(request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterClient::UpdateSecurityMarks(
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSecurityMarks(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter
}  // namespace cloud
}  // namespace google