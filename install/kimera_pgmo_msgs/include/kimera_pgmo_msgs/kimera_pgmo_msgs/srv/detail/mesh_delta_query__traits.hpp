// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kimera_pgmo_msgs:srv/MeshDeltaQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/srv/mesh_delta_query.hpp"


#ifndef KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__TRAITS_HPP_
#define KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kimera_pgmo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MeshDeltaQuery_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: sequence_numbers
  {
    if (msg.sequence_numbers.size() == 0) {
      out << "sequence_numbers: []";
    } else {
      out << "sequence_numbers: [";
      size_t pending_items = msg.sequence_numbers.size();
      for (auto item : msg.sequence_numbers) {
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
  const MeshDeltaQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sequence_numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sequence_numbers.size() == 0) {
      out << "sequence_numbers: []\n";
    } else {
      out << "sequence_numbers:\n";
      for (auto item : msg.sequence_numbers) {
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

inline std::string to_yaml(const MeshDeltaQuery_Request & msg, bool use_flow_style = false)
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
  const kimera_pgmo_msgs::srv::MeshDeltaQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::srv::MeshDeltaQuery_Request & msg)
{
  return kimera_pgmo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>()
{
  return "kimera_pgmo_msgs::srv::MeshDeltaQuery_Request";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>()
{
  return "kimera_pgmo_msgs/srv/MeshDeltaQuery_Request";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'deltas'
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__traits.hpp"

namespace kimera_pgmo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MeshDeltaQuery_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: deltas
  {
    if (msg.deltas.size() == 0) {
      out << "deltas: []";
    } else {
      out << "deltas: [";
      size_t pending_items = msg.deltas.size();
      for (auto item : msg.deltas) {
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
  const MeshDeltaQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: deltas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deltas.size() == 0) {
      out << "deltas: []\n";
    } else {
      out << "deltas:\n";
      for (auto item : msg.deltas) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MeshDeltaQuery_Response & msg, bool use_flow_style = false)
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
  const kimera_pgmo_msgs::srv::MeshDeltaQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::srv::MeshDeltaQuery_Response & msg)
{
  return kimera_pgmo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>()
{
  return "kimera_pgmo_msgs::srv::MeshDeltaQuery_Response";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>()
{
  return "kimera_pgmo_msgs/srv/MeshDeltaQuery_Response";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>
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
  const MeshDeltaQuery_Event & msg,
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
  const MeshDeltaQuery_Event & msg,
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

inline std::string to_yaml(const MeshDeltaQuery_Event & msg, bool use_flow_style = false)
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
  const kimera_pgmo_msgs::srv::MeshDeltaQuery_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  kimera_pgmo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kimera_pgmo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const kimera_pgmo_msgs::srv::MeshDeltaQuery_Event & msg)
{
  return kimera_pgmo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::MeshDeltaQuery_Event>()
{
  return "kimera_pgmo_msgs::srv::MeshDeltaQuery_Event";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::MeshDeltaQuery_Event>()
{
  return "kimera_pgmo_msgs/srv/MeshDeltaQuery_Event";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Event>
  : std::integral_constant<bool, has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>::value && has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<kimera_pgmo_msgs::srv::MeshDeltaQuery_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<kimera_pgmo_msgs::srv::MeshDeltaQuery>()
{
  return "kimera_pgmo_msgs::srv::MeshDeltaQuery";
}

template<>
inline const char * name<kimera_pgmo_msgs::srv::MeshDeltaQuery>()
{
  return "kimera_pgmo_msgs/srv/MeshDeltaQuery";
}

template<>
struct has_fixed_size<kimera_pgmo_msgs::srv::MeshDeltaQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>::value &&
    has_fixed_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>::value &&
    has_bounded_size<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>::value
  >
{
};

template<>
struct is_service<kimera_pgmo_msgs::srv::MeshDeltaQuery>
  : std::true_type
{
};

template<>
struct is_service_request<kimera_pgmo_msgs::srv::MeshDeltaQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<kimera_pgmo_msgs::srv::MeshDeltaQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__TRAITS_HPP_
