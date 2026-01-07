// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vectors.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__BUILDER_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semantic_inference_msgs/msg/detail/feature_vectors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semantic_inference_msgs
{

namespace msg
{

namespace builder
{

class Init_FeatureVectors_features
{
public:
  explicit Init_FeatureVectors_features(::semantic_inference_msgs::msg::FeatureVectors & msg)
  : msg_(msg)
  {}
  ::semantic_inference_msgs::msg::FeatureVectors features(::semantic_inference_msgs::msg::FeatureVectors::_features_type arg)
  {
    msg_.features = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureVectors msg_;
};

class Init_FeatureVectors_names
{
public:
  Init_FeatureVectors_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeatureVectors_features names(::semantic_inference_msgs::msg::FeatureVectors::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_FeatureVectors_features(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureVectors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semantic_inference_msgs::msg::FeatureVectors>()
{
  return semantic_inference_msgs::msg::builder::Init_FeatureVectors_names();
}

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__BUILDER_HPP_
