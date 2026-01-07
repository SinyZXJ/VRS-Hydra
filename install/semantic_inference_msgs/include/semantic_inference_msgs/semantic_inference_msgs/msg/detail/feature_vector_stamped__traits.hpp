// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVectorStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vector_stamped.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__TRAITS_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'feature'
#include "semantic_inference_msgs/msg/detail/feature_vector__traits.hpp"

namespace semantic_inference_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FeatureVectorStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: feature
  {
    out << "feature: ";
    to_flow_style_yaml(msg.feature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FeatureVectorStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: feature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature:\n";
    to_block_style_yaml(msg.feature, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FeatureVectorStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace semantic_inference_msgs

namespace rosidl_generator_traits
{

[[deprecated("use semantic_inference_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semantic_inference_msgs::msg::FeatureVectorStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  semantic_inference_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semantic_inference_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const semantic_inference_msgs::msg::FeatureVectorStamped & msg)
{
  return semantic_inference_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<semantic_inference_msgs::msg::FeatureVectorStamped>()
{
  return "semantic_inference_msgs::msg::FeatureVectorStamped";
}

template<>
inline const char * name<semantic_inference_msgs::msg::FeatureVectorStamped>()
{
  return "semantic_inference_msgs/msg/FeatureVectorStamped";
}

template<>
struct has_fixed_size<semantic_inference_msgs::msg::FeatureVectorStamped>
  : std::integral_constant<bool, has_fixed_size<semantic_inference_msgs::msg::FeatureVector>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<semantic_inference_msgs::msg::FeatureVectorStamped>
  : std::integral_constant<bool, has_bounded_size<semantic_inference_msgs::msg::FeatureVector>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<semantic_inference_msgs::msg::FeatureVectorStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTOR_STAMPED__TRAITS_HPP_
