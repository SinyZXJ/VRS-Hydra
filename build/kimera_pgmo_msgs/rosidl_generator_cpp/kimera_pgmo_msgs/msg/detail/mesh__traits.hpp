// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kimera_pgmo_msgs/msg/detail/mesh__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'triangles'
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__traits.hpp"
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'vertex_stamps'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'vertex_colors'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace kimera_pgmo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mesh & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ns
  {
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << ", ";
  }

  // member: triangles
  {
    if (msg.triangles.size() == 0) {
      out << "triangles: []";
    } else {
      out << "triangles: [";
      size_t pending_items = msg.triangles.size();
      for (auto item : msg.triangles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vertices
  {
    if (msg.vertices.size() == 0) {
      out << "vertices: []";
    } else {
      out << "vertices: [";
      size_t pending_items = msg.vertices.size();
      for (auto item : msg.vertices) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vertex_stamps
  {
    if (msg.vertex_stamps.size() == 0) {
      out << "vertex_stamps: []";
    } else {
      out << "vertex_stamps: [";
      size_t pending_items = msg.vertex_stamps.size();
      for (auto item : msg.vertex_stamps) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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
    out << ", ";
  }

  // member: vertex_colors
  {
    if (msg.vertex_colors.size() == 0) {
      out << "vertex_colors: []";
    } else {
      out << "vertex_colors: [";
      size_t pending_items = msg.vertex_colors.size();
      for (auto item : msg.vertex_colors) {
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
  const Mesh & msg,
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

  // member: ns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ns: ";
    rosidl_generator_traits::value_to_yaml(msg.ns, out);
    out << "\n";
  }

  // member: triangles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.triangles.size() == 0) {
      out << "triangles: []\n";
    } else {
      out << "triangles:\n";
      for (auto item : msg.triangles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices.size() == 0) {
      out << "vertices: []\n";
    } else {
      out << "vertices:\n";
      for (auto item : msg.vertices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: vertex_stamps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_stamps.size() == 0) {
      out << "vertex_stamps: []\n";
    } else {
      out << "vertex_stamps:\n";
      for (auto item : msg.vertex_stamps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

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

  // member: vertex_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_colors.size() == 0) {
      out << "vertex_colors: []\n";
    } else {
      out << "vertex_colors:\n";
      for (auto item : msg.vertex_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mesh & msg, bool use_flow_style = false)
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
  const kimera_pgmo_msgs::msg::Mesh & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::msg::Mesh & msg)
{
  return kimera_pgmo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::msg::Mesh>()
{
  return "kimera_pgmo_msgs::msg::Mesh";
}

template<>
inline const char * name<kimera_pgmo_msgs::msg::Mesh>()
{
  return "kimera_pgmo_msgs/msg/Mesh";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::msg::Mesh>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kimera_pgmo_msgs::msg::Mesh>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__TRAITS_HPP_
