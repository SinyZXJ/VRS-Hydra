// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hydra_msgs:msg/DsgUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/dsg_update.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__TRAITS_HPP_
#define HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hydra_msgs/msg/detail/dsg_update__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace hydra_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DsgUpdate & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: layer_contents
  {
    if (msg.layer_contents.size() == 0) {
      out << "layer_contents: []";
    } else {
      out << "layer_contents: [";
      size_t pending_items = msg.layer_contents.size();
      for (auto item : msg.layer_contents) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deleted_nodes
  {
    if (msg.deleted_nodes.size() == 0) {
      out << "deleted_nodes: []";
    } else {
      out << "deleted_nodes: [";
      size_t pending_items = msg.deleted_nodes.size();
      for (auto item : msg.deleted_nodes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deleted_edges
  {
    if (msg.deleted_edges.size() == 0) {
      out << "deleted_edges: []";
    } else {
      out << "deleted_edges: [";
      size_t pending_items = msg.deleted_edges.size();
      for (auto item : msg.deleted_edges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: full_update
  {
    out << "full_update: ";
    rosidl_generator_traits::value_to_yaml(msg.full_update, out);
    out << ", ";
  }

  // member: sequence_number
  {
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DsgUpdate & msg,
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

  // member: layer_contents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.layer_contents.size() == 0) {
      out << "layer_contents: []\n";
    } else {
      out << "layer_contents:\n";
      for (auto item : msg.layer_contents) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deleted_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deleted_nodes.size() == 0) {
      out << "deleted_nodes: []\n";
    } else {
      out << "deleted_nodes:\n";
      for (auto item : msg.deleted_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: deleted_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deleted_edges.size() == 0) {
      out << "deleted_edges: []\n";
    } else {
      out << "deleted_edges:\n";
      for (auto item : msg.deleted_edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: full_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_update: ";
    rosidl_generator_traits::value_to_yaml(msg.full_update, out);
    out << "\n";
  }

  // member: sequence_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_number: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DsgUpdate & msg, bool use_flow_style = false)
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
  const hydra_msgs::msg::DsgUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  hydra_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hydra_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hydra_msgs::msg::DsgUpdate & msg)
{
  return hydra_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hydra_msgs::msg::DsgUpdate>()
{
  return "hydra_msgs::msg::DsgUpdate";
}

template<>
inline const char * name<hydra_msgs::msg::DsgUpdate>()
{
  return "hydra_msgs/msg/DsgUpdate";
}

template<>
struct has_fixed_size<hydra_msgs::msg::DsgUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hydra_msgs::msg::DsgUpdate>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hydra_msgs::msg::DsgUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__TRAITS_HPP_
