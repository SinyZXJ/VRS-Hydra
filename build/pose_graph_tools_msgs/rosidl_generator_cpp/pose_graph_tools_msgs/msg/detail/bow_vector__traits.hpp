// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/BowVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_vector.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/bow_vector__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BowVector & msg,
  std::ostream & out)
{
  out << "{";
  // member: word_ids
  {
    if (msg.word_ids.size() == 0) {
      out << "word_ids: []";
    } else {
      out << "word_ids: [";
      size_t pending_items = msg.word_ids.size();
      for (auto item : msg.word_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: word_values
  {
    if (msg.word_values.size() == 0) {
      out << "word_values: []";
    } else {
      out << "word_values: [";
      size_t pending_items = msg.word_values.size();
      for (auto item : msg.word_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const BowVector & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: word_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_ids.size() == 0) {
      out << "word_ids: []\n";
    } else {
      out << "word_ids:\n";
      for (auto item : msg.word_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: word_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.word_values.size() == 0) {
      out << "word_values: []\n";
    } else {
      out << "word_values:\n";
      for (auto item : msg.word_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BowVector & msg, bool use_flow_style = false)
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

}  // namespace pose_graph_tools_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pose_graph_tools_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pose_graph_tools_msgs::msg::BowVector & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::BowVector & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::BowVector>()
{
  return "pose_graph_tools_msgs::msg::BowVector";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::BowVector>()
{
  return "pose_graph_tools_msgs/msg/BowVector";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::BowVector>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::BowVector>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::BowVector>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__TRAITS_HPP_
