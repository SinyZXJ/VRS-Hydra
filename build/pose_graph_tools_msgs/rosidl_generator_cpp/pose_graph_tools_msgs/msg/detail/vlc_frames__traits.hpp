// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/VLCFrames.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_frames.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/vlc_frames__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'frames'
#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VLCFrames & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: destination_robot_id
  {
    out << "destination_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_robot_id, out);
    out << ", ";
  }

  // member: frames
  {
    if (msg.frames.size() == 0) {
      out << "frames: []";
    } else {
      out << "frames: [";
      size_t pending_items = msg.frames.size();
      for (auto item : msg.frames) {
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
  const VLCFrames & msg,
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

  // member: destination_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_robot_id, out);
    out << "\n";
  }

  // member: frames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frames.size() == 0) {
      out << "frames: []\n";
    } else {
      out << "frames:\n";
      for (auto item : msg.frames) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VLCFrames & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::VLCFrames & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::VLCFrames & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::VLCFrames>()
{
  return "pose_graph_tools_msgs::msg::VLCFrames";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::VLCFrames>()
{
  return "pose_graph_tools_msgs/msg/VLCFrames";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::VLCFrames>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::VLCFrames>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::VLCFrames>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__TRAITS_HPP_
