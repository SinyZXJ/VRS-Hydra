// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/loop_closures_ack.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoopClosuresAck & msg,
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

  // member: robot_src
  {
    if (msg.robot_src.size() == 0) {
      out << "robot_src: []";
    } else {
      out << "robot_src: [";
      size_t pending_items = msg.robot_src.size();
      for (auto item : msg.robot_src) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame_src
  {
    if (msg.frame_src.size() == 0) {
      out << "frame_src: []";
    } else {
      out << "frame_src: [";
      size_t pending_items = msg.frame_src.size();
      for (auto item : msg.frame_src) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: robot_dst
  {
    if (msg.robot_dst.size() == 0) {
      out << "robot_dst: []";
    } else {
      out << "robot_dst: [";
      size_t pending_items = msg.robot_dst.size();
      for (auto item : msg.robot_dst) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: frame_dst
  {
    if (msg.frame_dst.size() == 0) {
      out << "frame_dst: []";
    } else {
      out << "frame_dst: [";
      size_t pending_items = msg.frame_dst.size();
      for (auto item : msg.frame_dst) {
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
  const LoopClosuresAck & msg,
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

  // member: robot_src
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_src.size() == 0) {
      out << "robot_src: []\n";
    } else {
      out << "robot_src:\n";
      for (auto item : msg.robot_src) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: frame_src
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frame_src.size() == 0) {
      out << "frame_src: []\n";
    } else {
      out << "frame_src:\n";
      for (auto item : msg.frame_src) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: robot_dst
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robot_dst.size() == 0) {
      out << "robot_dst: []\n";
    } else {
      out << "robot_dst:\n";
      for (auto item : msg.robot_dst) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: frame_dst
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frame_dst.size() == 0) {
      out << "frame_dst: []\n";
    } else {
      out << "frame_dst:\n";
      for (auto item : msg.frame_dst) {
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

inline std::string to_yaml(const LoopClosuresAck & msg, bool use_flow_style = false)
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
  const pose_graph_tools_msgs::msg::LoopClosuresAck & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::LoopClosuresAck & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::LoopClosuresAck>()
{
  return "pose_graph_tools_msgs::msg::LoopClosuresAck";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::LoopClosuresAck>()
{
  return "pose_graph_tools_msgs/msg/LoopClosuresAck";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::LoopClosuresAck>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::LoopClosuresAck>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::LoopClosuresAck>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__TRAITS_HPP_
