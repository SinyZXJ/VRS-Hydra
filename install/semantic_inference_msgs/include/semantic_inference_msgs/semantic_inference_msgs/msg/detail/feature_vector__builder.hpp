// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__BUILDER_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semantic_inference_msgs/msg/detail/feature_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semantic_inference_msgs
{

namespace msg
{

namespace builder
{

class Init_FeatureVector_data
{
public:
  Init_FeatureVector_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::semantic_inference_msgs::msg::FeatureVector data(::semantic_inference_msgs::msg::FeatureVector::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semantic_inference_msgs::msg::FeatureVector>()
{
  return semantic_inference_msgs::msg::builder::Init_FeatureVector_data();
}

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR__BUILDER_HPP_
