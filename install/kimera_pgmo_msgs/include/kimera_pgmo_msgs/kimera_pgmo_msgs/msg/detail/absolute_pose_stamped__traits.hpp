// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kimera_pgmo_msgs:msg/AbsolutePoseStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/absolute_pose_stamped.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__TRAITS_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace kimera_pgmo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AbsolutePoseStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: idx
  {
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
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
  const AbsolutePoseStamped & msg,
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

  // member: idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idx: ";
    rosidl_generator_traits::value_to_yaml(msg.idx, out);
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

inline std::string to_yaml(const AbsolutePoseStamped & msg, bool use_flow_style = false)
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

}  // namespace kimera_pgmo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kimera_pgmo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kimera_pgmo_msgs::msg::AbsolutePoseStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::msg::AbsolutePoseStamped & msg)
{
  return kimera_pgmo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::msg::AbsolutePoseStamped>()
{
  return "kimera_pgmo_msgs::msg::AbsolutePoseStamped";
}

template<>
inline const char * name<kimera_pgmo_msgs::msg::AbsolutePoseStamped>()
{
  return "kimera_pgmo_msgs/msg/AbsolutePoseStamped";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::msg::AbsolutePoseStamped>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::msg::AbsolutePoseStamped>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kimera_pgmo_msgs::msg::AbsolutePoseStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__TRAITS_HPP_
