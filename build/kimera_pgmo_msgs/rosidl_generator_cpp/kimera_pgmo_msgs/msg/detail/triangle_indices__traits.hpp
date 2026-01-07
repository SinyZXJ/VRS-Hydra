// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/triangle_indices.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__TRAITS_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kimera_pgmo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TriangleIndices & msg,
  std::ostream & out)
{
  out << "{";
  // member: vertex_indices
  {
    if (msg.vertex_indices.size() == 0) {
      out << "vertex_indices: []";
    } else {
      out << "vertex_indices: [";
      size_t pending_items = msg.vertex_indices.size();
      for (auto item : msg.vertex_indices) {
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
  const TriangleIndices & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vertex_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_indices.size() == 0) {
      out << "vertex_indices: []\n";
    } else {
      out << "vertex_indices:\n";
      for (auto item : msg.vertex_indices) {
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

inline std::string to_yaml(const TriangleIndices & msg, bool use_flow_style = false)
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
  const kimera_pgmo_msgs::msg::TriangleIndices & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::msg::TriangleIndices & msg)
{
  return kimera_pgmo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::msg::TriangleIndices>()
{
  return "kimera_pgmo_msgs::msg::TriangleIndices";
}

template<>
inline const char * name<kimera_pgmo_msgs::msg::TriangleIndices>()
{
  return "kimera_pgmo_msgs/msg/TriangleIndices";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::msg::TriangleIndices>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::msg::TriangleIndices>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kimera_pgmo_msgs::msg::TriangleIndices>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__TRAITS_HPP_
