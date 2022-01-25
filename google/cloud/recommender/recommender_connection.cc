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
// source: google/cloud/recommender/v1/recommender_service.proto

#include "google/cloud/recommender/recommender_connection.h"
#include "google/cloud/recommender/internal/recommender_connection_impl.h"
#include "google/cloud/recommender/internal/recommender_option_defaults.h"
#include "google/cloud/recommender/internal/recommender_stub_factory.h"
#include "google/cloud/recommender/recommender_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace recommender {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecommenderConnection::~RecommenderConnection() = default;

StreamRange<google::cloud::recommender::v1::Insight>
RecommenderConnection::ListInsights(
    google::cloud::recommender::v1::ListInsightsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::recommender::v1::Insight>>(
      std::move(request),
      [](google::cloud::recommender::v1::ListInsightsRequest const&) {
        return StatusOr<google::cloud::recommender::v1::ListInsightsResponse>{};
      },
      [](google::cloud::recommender::v1::ListInsightsResponse const&) {
        return std::vector<google::cloud::recommender::v1::Insight>();
      });
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderConnection::GetInsight(
    google::cloud::recommender::v1::GetInsightRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Insight>
RecommenderConnection::MarkInsightAccepted(
    google::cloud::recommender::v1::MarkInsightAcceptedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::ListRecommendations(
    google::cloud::recommender::v1::ListRecommendationsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::recommender::v1::Recommendation>>(
      std::move(request),
      [](google::cloud::recommender::v1::ListRecommendationsRequest const&) {
        return StatusOr<
            google::cloud::recommender::v1::ListRecommendationsResponse>{};
      },
      [](google::cloud::recommender::v1::ListRecommendationsResponse const&) {
        return std::vector<google::cloud::recommender::v1::Recommendation>();
      });
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::GetRecommendation(
    google::cloud::recommender::v1::GetRecommendationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::MarkRecommendationClaimed(
    google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::MarkRecommendationSucceeded(
    google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::recommender::v1::Recommendation>
RecommenderConnection::MarkRecommendationFailed(
    google::cloud::recommender::v1::MarkRecommendationFailedRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<RecommenderConnection> MakeRecommenderConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 RecommenderPolicyOptionList>(options,
                                                              __func__);
  options = recommender_internal::RecommenderDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = recommender_internal::CreateDefaultRecommenderStub(
      background->cq(), options);
  return std::make_shared<recommender_internal::RecommenderConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace recommender_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<recommender::RecommenderConnection> MakeRecommenderConnection(
    std::shared_ptr<RecommenderStub> stub, Options options) {
  options = RecommenderDefaultOptions(std::move(options));
  return std::make_shared<recommender_internal::RecommenderConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_internal
}  // namespace cloud
}  // namespace google