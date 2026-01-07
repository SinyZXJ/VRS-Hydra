// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/VLCRequests.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_requests.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/vlc_requests__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VLCRequests & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: source_robot_id
  {
    out << "source_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_robot_id, out);
    out << ", ";
  }

  // member: destination_robot_id
  {
    out << "destination_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_robot_id, out);
    out << ", ";
  }

  // member: pose_ids
  {
    if (msg.pose_ids.size() == 0) {
      out << "pose_ids: []";
    } else {
      out << "pose_ids: [";
      size_t pending_items = msg.pose_ids.size();
      for (auto item : msg.pose_ids) {
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
  const VLCRequests & msg,
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

  // member: source_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_robot_id, out);
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

  // member: pose_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pose_ids.size() == 0) {
      out << "pose_ids: []\n";
    } else {
      out << "pose_ids:\n";
      for (auto item : msg.pose_ids) {
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

inline std::string to_yaml(const VLCRequests & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::VLCRequests & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::VLCRequests & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::VLCRequests>()
{
  return "pose_graph_tools_msgs::msg::VLCRequests";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::VLCRequests>()
{
  return "pose_graph_tools_msgs/msg/VLCRequests";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::VLCRequests>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::VLCRequests>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::VLCRequests>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__TRAITS_HPP_
