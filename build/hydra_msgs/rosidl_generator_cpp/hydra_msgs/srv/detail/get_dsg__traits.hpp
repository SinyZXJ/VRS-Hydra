// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hydra_msgs:srv/GetDsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/srv/get_dsg.hpp"


#ifndef HYDRA_MSGS__SRV__DETAIL__GET_DSG__TRAITS_HPP_
#define HYDRA_MSGS__SRV__DETAIL__GET_DSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hydra_msgs/srv/detail/get_dsg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hydra_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDsg_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDsg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDsg_Request & msg, bool use_flow_style = false)
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

}  // namespace hydra_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hydra_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hydra_msgs::srv::GetDsg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hydra_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hydra_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hydra_msgs::srv::GetDsg_Request & msg)
{
  return hydra_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hydra_msgs::srv::GetDsg_Request>()
{
  return "hydra_msgs::srv::GetDsg_Request";
}

template<>
inline const char * name<hydra_msgs::srv::GetDsg_Request>()
{
  return "hydra_msgs/srv/GetDsg_Request";
}

template<>
struct has_fixed_size<hydra_msgs::srv::GetDsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hydra_msgs::srv::GetDsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hydra_msgs::srv::GetDsg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'graph'
#include "hydra_msgs/msg/detail/dsg_update__traits.hpp"

namespace hydra_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDsg_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: graph
  {
    out << "graph: ";
    to_flow_style_yaml(msg.graph, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDsg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph:\n";
    to_block_style_yaml(msg.graph, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDsg_Response & msg, bool use_flow_style = false)
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

}  // namespace hydra_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hydra_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hydra_msgs::srv::GetDsg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hydra_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hydra_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hydra_msgs::srv::GetDsg_Response & msg)
{
  return hydra_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hydra_msgs::srv::GetDsg_Response>()
{
  return "hydra_msgs::srv::GetDsg_Response";
}

template<>
inline const char * name<hydra_msgs::srv::GetDsg_Response>()
{
  return "hydra_msgs/srv/GetDsg_Response";
}

template<>
struct has_fixed_size<hydra_msgs::srv::GetDsg_Response>
  : std::integral_constant<bool, has_fixed_size<hydra_msgs::msg::DsgUpdate>::value> {};

template<>
struct has_bounded_size<hydra_msgs::srv::GetDsg_Response>
  : std::integral_constant<bool, has_bounded_size<hydra_msgs::msg::DsgUpdate>::value> {};

template<>
struct is_message<hydra_msgs::srv::GetDsg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace hydra_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDsg_Event & msg,
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
  const GetDsg_Event & msg,
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

inline std::string to_yaml(const GetDsg_Event & msg, bool use_flow_style = false)
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

}  // namespace hydra_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hydra_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hydra_msgs::srv::GetDsg_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  hydra_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hydra_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const hydra_msgs::srv::GetDsg_Event & msg)
{
  return hydra_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hydra_msgs::srv::GetDsg_Event>()
{
  return "hydra_msgs::srv::GetDsg_Event";
}

template<>
inline const char * name<hydra_msgs::srv::GetDsg_Event>()
{
  return "hydra_msgs/srv/GetDsg_Event";
}

template<>
struct has_fixed_size<hydra_msgs::srv::GetDsg_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hydra_msgs::srv::GetDsg_Event>
  : std::integral_constant<bool, has_bounded_size<hydra_msgs::srv::GetDsg_Request>::value && has_bounded_size<hydra_msgs::srv::GetDsg_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<hydra_msgs::srv::GetDsg_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hydra_msgs::srv::GetDsg>()
{
  return "hydra_msgs::srv::GetDsg";
}

template<>
inline const char * name<hydra_msgs::srv::GetDsg>()
{
  return "hydra_msgs/srv/GetDsg";
}

template<>
struct has_fixed_size<hydra_msgs::srv::GetDsg>
  : std::integral_constant<
    bool,
    has_fixed_size<hydra_msgs::srv::GetDsg_Request>::value &&
    has_fixed_size<hydra_msgs::srv::GetDsg_Response>::value
  >
{
};

template<>
struct has_bounded_size<hydra_msgs::srv::GetDsg>
  : std::integral_constant<
    bool,
    has_bounded_size<hydra_msgs::srv::GetDsg_Request>::value &&
    has_bounded_size<hydra_msgs::srv::GetDsg_Response>::value
  >
{
};

template<>
struct is_service<hydra_msgs::srv::GetDsg>
  : std::true_type
{
};

template<>
struct is_service_request<hydra_msgs::srv::GetDsg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hydra_msgs::srv::GetDsg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HYDRA_MSGS__SRV__DETAIL__GET_DSG__TRAITS_HPP_
