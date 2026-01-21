// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hydra_msgs:msg/PlaceNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__TRAITS_HPP_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hydra_msgs/msg/detail/place_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace hydra_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlaceNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlaceNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaceNode & msg, bool use_flow_style = false)
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

}  // namespace hydra_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hydra_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hydra_msgs::msg::PlaceNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  hydra_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hydra_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hydra_msgs::msg::PlaceNode & msg)
{
  return hydra_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hydra_msgs::msg::PlaceNode>()
{
  return "hydra_msgs::msg::PlaceNode";
}

template<>
inline const char * name<hydra_msgs::msg::PlaceNode>()
{
  return "hydra_msgs/msg/PlaceNode";
}

template<>
struct has_fixed_size<hydra_msgs::msg::PlaceNode>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<hydra_msgs::msg::PlaceNode>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<hydra_msgs::msg::PlaceNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__TRAITS_HPP_
