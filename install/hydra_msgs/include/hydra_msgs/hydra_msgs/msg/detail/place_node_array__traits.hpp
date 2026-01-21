// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hydra_msgs:msg/PlaceNodeArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node_array.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__TRAITS_HPP_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hydra_msgs/msg/detail/place_node_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nodes'
#include "hydra_msgs/msg/detail/place_node__traits.hpp"

namespace hydra_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlaceNodeArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
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
  const PlaceNodeArray & msg,
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

  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlaceNodeArray & msg, bool use_flow_style = false)
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
  const hydra_msgs::msg::PlaceNodeArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  hydra_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hydra_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hydra_msgs::msg::PlaceNodeArray & msg)
{
  return hydra_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hydra_msgs::msg::PlaceNodeArray>()
{
  return "hydra_msgs::msg::PlaceNodeArray";
}

template<>
inline const char * name<hydra_msgs::msg::PlaceNodeArray>()
{
  return "hydra_msgs/msg/PlaceNodeArray";
}

template<>
struct has_fixed_size<hydra_msgs::msg::PlaceNodeArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hydra_msgs::msg::PlaceNodeArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hydra_msgs::msg::PlaceNodeArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__TRAITS_HPP_
