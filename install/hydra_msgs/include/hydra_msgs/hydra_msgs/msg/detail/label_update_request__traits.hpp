// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hydra_msgs:msg/LabelUpdateRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/label_update_request.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__TRAITS_HPP_
#define HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hydra_msgs/msg/detail/label_update_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'updates'
#include "hydra_msgs/msg/detail/node_label_update__traits.hpp"

namespace hydra_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LabelUpdateRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: updates
  {
    if (msg.updates.size() == 0) {
      out << "updates: []";
    } else {
      out << "updates: [";
      size_t pending_items = msg.updates.size();
      for (auto item : msg.updates) {
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
  const LabelUpdateRequest & msg,
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

  // member: updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.updates.size() == 0) {
      out << "updates: []\n";
    } else {
      out << "updates:\n";
      for (auto item : msg.updates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LabelUpdateRequest & msg, bool use_flow_style = false)
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
  const hydra_msgs::msg::LabelUpdateRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  hydra_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hydra_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hydra_msgs::msg::LabelUpdateRequest & msg)
{
  return hydra_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hydra_msgs::msg::LabelUpdateRequest>()
{
  return "hydra_msgs::msg::LabelUpdateRequest";
}

template<>
inline const char * name<hydra_msgs::msg::LabelUpdateRequest>()
{
  return "hydra_msgs/msg/LabelUpdateRequest";
}

template<>
struct has_fixed_size<hydra_msgs::msg::LabelUpdateRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hydra_msgs::msg::LabelUpdateRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hydra_msgs::msg::LabelUpdateRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__TRAITS_HPP_
