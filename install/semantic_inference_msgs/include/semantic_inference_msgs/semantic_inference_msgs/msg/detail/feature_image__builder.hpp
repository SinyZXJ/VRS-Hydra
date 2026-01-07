// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semantic_inference_msgs:msg/FeatureImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_image.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__BUILDER_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semantic_inference_msgs/msg/detail/feature_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semantic_inference_msgs
{

namespace msg
{

namespace builder
{

class Init_FeatureImage_features
{
public:
  explicit Init_FeatureImage_features(::semantic_inference_msgs::msg::FeatureImage & msg)
  : msg_(msg)
  {}
  ::semantic_inference_msgs::msg::FeatureImage features(::semantic_inference_msgs::msg::FeatureImage::_features_type arg)
  {
    msg_.features = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureImage msg_;
};

class Init_FeatureImage_image
{
public:
  explicit Init_FeatureImage_image(::semantic_inference_msgs::msg::FeatureImage & msg)
  : msg_(msg)
  {}
  Init_FeatureImage_features image(::semantic_inference_msgs::msg::FeatureImage::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_FeatureImage_features(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureImage msg_;
};

class Init_FeatureImage_mask_ids
{
public:
  explicit Init_FeatureImage_mask_ids(::semantic_inference_msgs::msg::FeatureImage & msg)
  : msg_(msg)
  {}
  Init_FeatureImage_image mask_ids(::semantic_inference_msgs::msg::FeatureImage::_mask_ids_type arg)
  {
    msg_.mask_ids = std::move(arg);
    return Init_FeatureImage_image(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureImage msg_;
};

class Init_FeatureImage_header
{
public:
  Init_FeatureImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeatureImage_mask_ids header(::semantic_inference_msgs::msg::FeatureImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FeatureImage_mask_ids(msg_);
  }

private:
  ::semantic_inference_msgs::msg::FeatureImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semantic_inference_msgs::msg::FeatureImage>()
{
  return semantic_inference_msgs::msg::builder::Init_FeatureImage_header();
}

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__BUILDER_HPP_
