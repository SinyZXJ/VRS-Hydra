// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/VLCFrameMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_frame_msg.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'descriptors_mat'
#include "sensor_msgs/msg/detail/image__traits.hpp"
// Member 'versors'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'submap_from_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VLCFrameMsg & msg,
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

  // member: submap_id
  {
    out << "submap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_id, out);
    out << ", ";
  }

  // member: descriptors_mat
  {
    out << "descriptors_mat: ";
    to_flow_style_yaml(msg.descriptors_mat, out);
    out << ", ";
  }

  // member: versors
  {
    out << "versors: ";
    to_flow_style_yaml(msg.versors, out);
    out << ", ";
  }

  // member: depths
  {
    if (msg.depths.size() == 0) {
      out << "depths: []";
    } else {
      out << "depths: [";
      size_t pending_items = msg.depths.size();
      for (auto item : msg.depths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: submap_from_pose
  {
    out << "submap_from_pose: ";
    to_flow_style_yaml(msg.submap_from_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VLCFrameMsg & msg,
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

  // member: submap_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submap_id: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_id, out);
    out << "\n";
  }

  // member: descriptors_mat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "descriptors_mat:\n";
    to_block_style_yaml(msg.descriptors_mat, out, indentation + 2);
  }

  // member: versors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "versors:\n";
    to_block_style_yaml(msg.versors, out, indentation + 2);
  }

  // member: depths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depths.size() == 0) {
      out << "depths: []\n";
    } else {
      out << "depths:\n";
      for (auto item : msg.depths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: submap_from_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submap_from_pose:\n";
    to_block_style_yaml(msg.submap_from_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VLCFrameMsg & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::VLCFrameMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::VLCFrameMsg & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::VLCFrameMsg>()
{
  return "pose_graph_tools_msgs::msg::VLCFrameMsg";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::VLCFrameMsg>()
{
  return "pose_graph_tools_msgs/msg/VLCFrameMsg";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::VLCFrameMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::VLCFrameMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::VLCFrameMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__TRAITS_HPP_
