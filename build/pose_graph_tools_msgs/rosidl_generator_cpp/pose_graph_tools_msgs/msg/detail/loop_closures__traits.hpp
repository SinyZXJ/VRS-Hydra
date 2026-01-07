// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/loop_closures.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/loop_closures__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'edges'
#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoopClosures & msg,
  std::ostream & out)
{
  out << "{";
  // member: publishing_robot_id
  {
    out << "publishing_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.publishing_robot_id, out);
    out << ", ";
  }

  // member: destination_robot_id
  {
    out << "destination_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_robot_id, out);
    out << ", ";
  }

  // member: edges
  {
    if (msg.edges.size() == 0) {
      out << "edges: []";
    } else {
      out << "edges: [";
      size_t pending_items = msg.edges.size();
      for (auto item : msg.edges) {
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
  const LoopClosures & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: publishing_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publishing_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.publishing_robot_id, out);
    out << "\n";
  }

  // member: destination_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_robot_id, out);
    out << "\n";
  }

  // member: edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.edges.size() == 0) {
      out << "edges: []\n";
    } else {
      out << "edges:\n";
      for (auto item : msg.edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoopClosures & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::LoopClosures & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::LoopClosures & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::LoopClosures>()
{
  return "pose_graph_tools_msgs::msg::LoopClosures";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::LoopClosures>()
{
  return "pose_graph_tools_msgs/msg/LoopClosures";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::LoopClosures>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::LoopClosures>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::LoopClosures>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__TRAITS_HPP_
