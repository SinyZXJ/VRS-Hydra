// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semantic_inference_msgs:msg/FeatureImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/msg/feature_image.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__TRAITS_HPP_
#define SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semantic_inference_msgs/msg/detail/feature_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'features'
#include "semantic_inference_msgs/msg/detail/feature_vector__traits.hpp"

namespace semantic_inference_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FeatureImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mask_ids
  {
    if (msg.mask_ids.size() == 0) {
      out << "mask_ids: []";
    } else {
      out << "mask_ids: [";
      size_t pending_items = msg.mask_ids.size();
      for (auto item : msg.mask_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
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
  const FeatureImage & msg,
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

  // member: mask_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mask_ids.size() == 0) {
      out << "mask_ids: []\n";
    } else {
      out << "mask_ids:\n";
      for (auto item : msg.mask_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
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

inline std::string to_yaml(const FeatureImage & msg, bool use_flow_style = false)
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
  const semantic_inference_msgs::msg::FeatureImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  semantic_inference_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semantic_inference_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const semantic_inference_msgs::msg::FeatureImage & msg)
{
  return semantic_inference_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<semantic_inference_msgs::msg::FeatureImage>()
{
  return "semantic_inference_msgs::msg::FeatureImage";
}

template<>
inline const char * name<semantic_inference_msgs::msg::FeatureImage>()
{
  return "semantic_inference_msgs/msg/FeatureImage";
}

template<>
struct has_fixed_size<semantic_inference_msgs::msg::FeatureImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semantic_inference_msgs::msg::FeatureImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<semantic_inference_msgs::msg::FeatureImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEMANTIC_INFERENCE_MSGS__MSG__DETAIL__FEATURE_IMAGE__TRAITS_HPP_
