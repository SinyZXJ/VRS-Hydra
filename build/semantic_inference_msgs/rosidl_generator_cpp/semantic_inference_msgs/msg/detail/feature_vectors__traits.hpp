// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semantic_inference_msgs:msg/FeatureVectors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_vectors.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__TRAITS_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semantic_inference_msgs/msg/detail/feature_vectors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'features'
#include "semantic_inference_msgs/msg/detail/feature_vector__traits.hpp"

namespace semantic_inference_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FeatureVectors & msg,
  std::ostream & out)
{
  out << "{";
  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: features
  {
    if (msg.features.size() == 0) {
      out << "features: []";
    } else {
      out << "features: [";
      size_t pending_items = msg.features.size();
      for (auto item : msg.features) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FeatureVectors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.features.size() == 0) {
      out << "features: []\n";
    } else {
      out << "features:\n";
      for (auto item : msg.features) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FeatureVectors & msg, bool use_flow_style = false)
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
  const semantic_inference_msgs::msg::FeatureVectors & msg,
  std::ostream & out, size_t indentation = 0)
{
  semantic_inference_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semantic_inference_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const semantic_inference_msgs::msg::FeatureVectors & msg)
{
  return semantic_inference_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<semantic_inference_msgs::msg::FeatureVectors>()
{
  return "semantic_inference_msgs::msg::FeatureVectors";
}

template<>
inline const char * name<semantic_inference_msgs::msg::FeatureVectors>()
{
  return "semantic_inference_msgs/msg/FeatureVectors";
}

template<>
struct has_fixed_size<semantic_inference_msgs::msg::FeatureVectors>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semantic_inference_msgs::msg::FeatureVectors>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<semantic_inference_msgs::msg::FeatureVectors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_VECTORS__TRAITS_HPP_
