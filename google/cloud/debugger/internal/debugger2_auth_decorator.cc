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
// source: google/devtools/clouddebugger/v2/debugger.proto

#include "google/cloud/debugger/internal/debugger2_auth_decorator.h"
#include <google/devtools/clouddebugger/v2/debugger.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

Debugger2Auth::Debugger2Auth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<Debugger2Stub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::devtools::clouddebugger::v2::SetBreakpointResponse>
Debugger2Auth::SetBreakpoint(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::SetBreakpointRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetBreakpoint(context, request);
}

StatusOr<google::devtools::clouddebugger::v2::GetBreakpointResponse>
Debugger2Auth::GetBreakpoint(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::GetBreakpointRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBreakpoint(context, request);
}

Status Debugger2Auth::DeleteBreakpoint(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::DeleteBreakpointRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBreakpoint(context, request);
}

StatusOr<google::devtools::clouddebugger::v2::ListBreakpointsResponse>
Debugger2Auth::ListBreakpoints(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::ListBreakpointsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBreakpoints(context, request);
}

StatusOr<google::devtools::clouddebugger::v2::ListDebuggeesResponse>
Debugger2Auth::ListDebuggees(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::ListDebuggeesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDebuggees(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google