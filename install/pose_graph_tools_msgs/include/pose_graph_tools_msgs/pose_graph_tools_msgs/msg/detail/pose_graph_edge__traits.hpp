// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph_edge.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__struct.hpp"
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
  const PoseGraphEdge & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: key_from
  {
    out << "key_from: ";
    rosidl_generator_traits::value_to_yaml(msg.key_from, out);
    out << ", ";
  }

  // member: key_to
  {
    out << "key_to: ";
    rosidl_generator_traits::value_to_yaml(msg.key_to, out);
    out << ", ";
  }

  // member: robot_from
  {
    out << "robot_from: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_from, out);
    out << ", ";
  }

  // member: robot_to
  {
    out << "robot_to: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_to, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
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
  const PoseGraphEdge & msg,
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

  // member: key_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_from: ";
    rosidl_generator_traits::value_to_yaml(msg.key_from, out);
    out << "\n";
  }

  // member: key_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_to: ";
    rosidl_generator_traits::value_to_yaml(msg.key_to, out);
    out << "\n";
  }

  // member: robot_from
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_from: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_from, out);
    out << "\n";
  }

  // member: robot_to
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_to: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_to, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
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

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
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

inline std::string to_yaml(const PoseGraphEdge & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::PoseGraphEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::PoseGraphEdge>()
{
  return "pose_graph_tools_msgs::msg::PoseGraphEdge";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::PoseGraphEdge>()
{
  return "pose_graph_tools_msgs/msg/PoseGraphEdge";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::PoseGraphEdge>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::PoseGraphEdge>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::PoseGraphEdge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__TRAITS_HPP_
