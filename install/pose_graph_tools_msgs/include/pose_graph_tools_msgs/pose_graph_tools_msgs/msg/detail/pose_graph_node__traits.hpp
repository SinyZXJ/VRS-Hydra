// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/PoseGraphNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph_node.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseGraphNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseGraphNode & msg,
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

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseGraphNode & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::PoseGraphNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::PoseGraphNode & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::PoseGraphNode>()
{
  return "pose_graph_tools_msgs::msg::PoseGraphNode";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::PoseGraphNode>()
{
  return "pose_graph_tools_msgs/msg/PoseGraphNode";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::PoseGraphNode>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::PoseGraphNode>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::PoseGraphNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__TRAITS_HPP_
