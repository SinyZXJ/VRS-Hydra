// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh_delta.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__TRAITS_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kimera_pgmo_msgs/msg/detail/mesh_delta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'vertex_updates'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'vertex_updates_colors'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"
// Member 'face_updates'
// Member 'face_archive_updates'
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__traits.hpp"

namespace kimera_pgmo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MeshDelta & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: vertex_updates
  {
    if (msg.vertex_updates.size() == 0) {
      out << "vertex_updates: []";
    } else {
      out << "vertex_updates: [";
      size_t pending_items = msg.vertex_updates.size();
      for (auto item : msg.vertex_updates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vertex_updates_colors
  {
    if (msg.vertex_updates_colors.size() == 0) {
      out << "vertex_updates_colors: []";
    } else {
      out << "vertex_updates_colors: [";
      size_t pending_items = msg.vertex_updates_colors.size();
      for (auto item : msg.vertex_updates_colors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stamp_updates
  {
    if (msg.stamp_updates.size() == 0) {
      out << "stamp_updates: []";
    } else {
      out << "stamp_updates: [";
      size_t pending_items = msg.stamp_updates.size();
      for (auto item : msg.stamp_updates) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: semantic_updates
  {
    if (msg.semantic_updates.size() == 0) {
      out << "semantic_updates: []";
    } else {
      out << "semantic_updates: [";
      size_t pending_items = msg.semantic_updates.size();
      for (auto item : msg.semantic_updates) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: face_updates
  {
    if (msg.face_updates.size() == 0) {
      out << "face_updates: []";
    } else {
      out << "face_updates: [";
      size_t pending_items = msg.face_updates.size();
      for (auto item : msg.face_updates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: face_archive_updates
  {
    if (msg.face_archive_updates.size() == 0) {
      out << "face_archive_updates: []";
    } else {
      out << "face_archive_updates: [";
      size_t pending_items = msg.face_archive_updates.size();
      for (auto item : msg.face_archive_updates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: deleted_indices
  {
    if (msg.deleted_indices.size() == 0) {
      out << "deleted_indices: []";
    } else {
      out << "deleted_indices: [";
      size_t pending_items = msg.deleted_indices.size();
      for (auto item : msg.deleted_indices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prev_indices
  {
    if (msg.prev_indices.size() == 0) {
      out << "prev_indices: []";
    } else {
      out << "prev_indices: [";
      size_t pending_items = msg.prev_indices.size();
      for (auto item : msg.prev_indices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: curr_indices
  {
    if (msg.curr_indices.size() == 0) {
      out << "curr_indices: []";
    } else {
      out << "curr_indices: [";
      size_t pending_items = msg.curr_indices.size();
      for (auto item : msg.curr_indices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vertex_start
  {
    out << "vertex_start: ";
    rosidl_generator_traits::value_to_yaml(msg.vertex_start, out);
    out << ", ";
  }

  // member: face_start
  {
    out << "face_start: ";
    rosidl_generator_traits::value_to_yaml(msg.face_start, out);
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
  const MeshDelta & msg,
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

  // member: vertex_updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_updates.size() == 0) {
      out << "vertex_updates: []\n";
    } else {
      out << "vertex_updates:\n";
      for (auto item : msg.vertex_updates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: vertex_updates_colors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertex_updates_colors.size() == 0) {
      out << "vertex_updates_colors: []\n";
    } else {
      out << "vertex_updates_colors:\n";
      for (auto item : msg.vertex_updates_colors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stamp_updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stamp_updates.size() == 0) {
      out << "stamp_updates: []\n";
    } else {
      out << "stamp_updates:\n";
      for (auto item : msg.stamp_updates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: semantic_updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.semantic_updates.size() == 0) {
      out << "semantic_updates: []\n";
    } else {
      out << "semantic_updates:\n";
      for (auto item : msg.semantic_updates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: face_updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.face_updates.size() == 0) {
      out << "face_updates: []\n";
    } else {
      out << "face_updates:\n";
      for (auto item : msg.face_updates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: face_archive_updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.face_archive_updates.size() == 0) {
      out << "face_archive_updates: []\n";
    } else {
      out << "face_archive_updates:\n";
      for (auto item : msg.face_archive_updates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: deleted_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deleted_indices.size() == 0) {
      out << "deleted_indices: []\n";
    } else {
      out << "deleted_indices:\n";
      for (auto item : msg.deleted_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prev_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prev_indices.size() == 0) {
      out << "prev_indices: []\n";
    } else {
      out << "prev_indices:\n";
      for (auto item : msg.prev_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: curr_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.curr_indices.size() == 0) {
      out << "curr_indices: []\n";
    } else {
      out << "curr_indices:\n";
      for (auto item : msg.curr_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vertex_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertex_start: ";
    rosidl_generator_traits::value_to_yaml(msg.vertex_start, out);
    out << "\n";
  }

  // member: face_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "face_start: ";
    rosidl_generator_traits::value_to_yaml(msg.face_start, out);
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

inline std::string to_yaml(const MeshDelta & msg, bool use_flow_style = false)
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
  const kimera_pgmo_msgs::msg::MeshDelta & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::msg::MeshDelta & msg)
{
  return kimera_pgmo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::msg::MeshDelta>()
{
  return "kimera_pgmo_msgs::msg::MeshDelta";
}

template<>
inline const char * name<kimera_pgmo_msgs::msg::MeshDelta>()
{
  return "kimera_pgmo_msgs/msg/MeshDelta";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::msg::MeshDelta>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::msg::MeshDelta>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kimera_pgmo_msgs::msg::MeshDelta>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__TRAITS_HPP_
