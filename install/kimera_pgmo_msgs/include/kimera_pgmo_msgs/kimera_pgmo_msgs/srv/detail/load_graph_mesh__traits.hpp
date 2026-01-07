// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/srv/load_graph_mesh.hpp"


#ifndef KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__TRAITS_HPP_
#define KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kimera_pgmo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadGraphMesh_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: dgrf_file
  {
    out << "dgrf_file: ";
    rosidl_generator_traits::value_to_yaml(msg.dgrf_file, out);
    out << ", ";
  }

  // member: ply_file
  {
    out << "ply_file: ";
    rosidl_generator_traits::value_to_yaml(msg.ply_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadGraphMesh_Request & msg,
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

  // member: dgrf_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgrf_file: ";
    rosidl_generator_traits::value_to_yaml(msg.dgrf_file, out);
    out << "\n";
  }

  // member: ply_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ply_file: ";
    rosidl_generator_traits::value_to_yaml(msg.ply_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadGraphMesh_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kimera_pgmo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kimera_pgmo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kimera_pgmo_msgs::srv::LoadGraphMesh_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::srv::LoadGraphMesh_Request & msg)
{
  return kimera_pgmo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>()
{
  return "kimera_pgmo_msgs::srv::LoadGraphMesh_Request";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>()
{
  return "kimera_pgmo_msgs/srv/LoadGraphMesh_Request";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace kimera_pgmo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadGraphMesh_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadGraphMesh_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadGraphMesh_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kimera_pgmo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kimera_pgmo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kimera_pgmo_msgs::srv::LoadGraphMesh_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::srv::LoadGraphMesh_Response & msg)
{
  return kimera_pgmo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>()
{
  return "kimera_pgmo_msgs::srv::LoadGraphMesh_Response";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>()
{
  return "kimera_pgmo_msgs/srv/LoadGraphMesh_Response";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace kimera_pgmo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LoadGraphMesh_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const LoadGraphMesh_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadGraphMesh_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace kimera_pgmo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use kimera_pgmo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kimera_pgmo_msgs::srv::LoadGraphMesh_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::srv::LoadGraphMesh_Event & msg)
{
  return kimera_pgmo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::LoadGraphMesh_Event>()
{
  return "kimera_pgmo_msgs::srv::LoadGraphMesh_Event";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::LoadGraphMesh_Event>()
{
  return "kimera_pgmo_msgs/srv/LoadGraphMesh_Event";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Event>
  : std::integral_constant<bool, has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>::value && has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<kimera_pgmo_msgs::srv::LoadGraphMesh_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::LoadGraphMesh>()
{
  return "kimera_pgmo_msgs::srv::LoadGraphMesh";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::LoadGraphMesh>()
{
  return "kimera_pgmo_msgs/srv/LoadGraphMesh";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::LoadGraphMesh>
  : std::integral_constant<
    bool,
    has_fixed_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>::value &&
    has_fixed_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>::value
  >
{
};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh>
  : std::integral_constant<
    bool,
    has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>::value &&
    has_bounded_size<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>::value
  >
{
};

template<>
struct is_service<kimera_pgmo_msgs::srv::LoadGraphMesh>
  : std::true_type
{
};

template<>
struct is_service_request<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__TRAITS_HPP_
