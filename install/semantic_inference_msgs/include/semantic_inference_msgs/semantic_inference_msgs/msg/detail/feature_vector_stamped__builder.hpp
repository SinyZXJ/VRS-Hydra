// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVectorStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector_stamped.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__BUILDER_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semantic_inference_msgs
{

namespace msg
{

namespace builder
{

class Init_FeatureVectorStamped_feature
{
public:
  explicit Init_FeatureVectorStamped_feature(::semantic_inference_msgs::msg::FeatureVectorStamped & msg)
  : msg_(msg)
  {}
  ::semantic_inference_msgs::msg::FeatureVectorStamped feature(::semantic_inference_msgs::msg::FeatureVectorStamped::_feature_type arg)
  {
    msg_.feature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureVectorStamped msg_;
};

class Init_FeatureVectorStamped_header
{
public:
  Init_FeatureVectorStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeatureVectorStamped_feature header(::semantic_inference_msgs::msg::FeatureVectorStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FeatureVectorStamped_feature(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureVectorStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semantic_inference_msgs::msg::FeatureVectorStamped>()
{
  return semantic_inference_msgs::msg::builder::Init_FeatureVectorStamped_header();
}

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__BUILDER_HPP_
