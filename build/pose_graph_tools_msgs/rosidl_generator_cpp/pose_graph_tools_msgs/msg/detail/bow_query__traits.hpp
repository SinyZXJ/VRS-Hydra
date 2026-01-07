// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/bow_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bow_vector'
#include "pose_graph_tools_msgs/msg/detail/bow_vector__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BowQuery & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: pose_id
  {
    out << "pose_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_id, out);
    out << ", ";
  }

  // member: bow_vector
  {
    out << "bow_vector: ";
    to_flow_style_yaml(msg.bow_vector, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BowQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: pose_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_id, out);
    out << "\n";
  }

  // member: bow_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bow_vector:\n";
    to_block_style_yaml(msg.bow_vector, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BowQuery & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::BowQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::BowQuery & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::BowQuery>()
{
  return "pose_graph_tools_msgs::msg::BowQuery";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::BowQuery>()
{
  return "pose_graph_tools_msgs/msg/BowQuery";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::BowQuery>
  : std::integral_constant<bool, has_fixed_size<pose_graph_tools_msgs::msg::BowVector>::value> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::BowQuery>
  : std::integral_constant<bool, has_bounded_size<pose_graph_tools_msgs::msg::BowVector>::value> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::BowQuery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__TRAITS_HPP_
