// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from config_utilities_msgs:srv/SetConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "config_utilities_msgs/srv/set_config.hpp"


#ifndef CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__TRAITS_HPP_
#define CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "config_utilities_msgs/srv/detail/set_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace config_utilities_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetConfig_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetConfig_Request & msg, bool use_flow_style = false)
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

}  // namespace config_utilities_msgs

namespace rosidl_generator_traits
{

[[deprecated("use config_utilities_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const config_utilities_msgs::srv::SetConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  config_utilities_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use config_utilities_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const config_utilities_msgs::srv::SetConfig_Request & msg)
{
  return config_utilities_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<config_utilities_msgs::srv::SetConfig_Request>()
{
  return "config_utilities_msgs::srv::SetConfig_Request";
}

template<>
inline const char * name<config_utilities_msgs::srv::SetConfig_Request>()
{
  return "config_utilities_msgs/srv/SetConfig_Request";
}

template<>
struct has_fixed_size<config_utilities_msgs::srv::SetConfig_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<config_utilities_msgs::srv::SetConfig_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<config_utilities_msgs::srv::SetConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace config_utilities_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetConfig_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetConfig_Response & msg, bool use_flow_style = false)
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

}  // namespace config_utilities_msgs

namespace rosidl_generator_traits
{

[[deprecated("use config_utilities_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const config_utilities_msgs::srv::SetConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  config_utilities_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use config_utilities_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const config_utilities_msgs::srv::SetConfig_Response & msg)
{
  return config_utilities_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<config_utilities_msgs::srv::SetConfig_Response>()
{
  return "config_utilities_msgs::srv::SetConfig_Response";
}

template<>
inline const char * name<config_utilities_msgs::srv::SetConfig_Response>()
{
  return "config_utilities_msgs/srv/SetConfig_Response";
}

template<>
struct has_fixed_size<config_utilities_msgs::srv::SetConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<config_utilities_msgs::srv::SetConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<config_utilities_msgs::srv::SetConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace config_utilities_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetConfig_Event & msg,
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
  const SetConfig_Event & msg,
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

inline std::string to_yaml(const SetConfig_Event & msg, bool use_flow_style = false)
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

}  // namespace config_utilities_msgs

namespace rosidl_generator_traits
{

[[deprecated("use config_utilities_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const config_utilities_msgs::srv::SetConfig_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  config_utilities_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use config_utilities_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const config_utilities_msgs::srv::SetConfig_Event & msg)
{
  return config_utilities_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<config_utilities_msgs::srv::SetConfig_Event>()
{
  return "config_utilities_msgs::srv::SetConfig_Event";
}

template<>
inline const char * name<config_utilities_msgs::srv::SetConfig_Event>()
{
  return "config_utilities_msgs/srv/SetConfig_Event";
}

template<>
struct has_fixed_size<config_utilities_msgs::srv::SetConfig_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<config_utilities_msgs::srv::SetConfig_Event>
  : std::integral_constant<bool, has_bounded_size<config_utilities_msgs::srv::SetConfig_Request>::value && has_bounded_size<config_utilities_msgs::srv::SetConfig_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<config_utilities_msgs::srv::SetConfig_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<config_utilities_msgs::srv::SetConfig>()
{
  return "config_utilities_msgs::srv::SetConfig";
}

template<>
inline const char * name<config_utilities_msgs::srv::SetConfig>()
{
  return "config_utilities_msgs/srv/SetConfig";
}

template<>
struct has_fixed_size<config_utilities_msgs::srv::SetConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<config_utilities_msgs::srv::SetConfig_Request>::value &&
    has_fixed_size<config_utilities_msgs::srv::SetConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<config_utilities_msgs::srv::SetConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<config_utilities_msgs::srv::SetConfig_Request>::value &&
    has_bounded_size<config_utilities_msgs::srv::SetConfig_Response>::value
  >
{
};

template<>
struct is_service<config_utilities_msgs::srv::SetConfig>
  : std::true_type
{
};

template<>
struct is_service_request<config_utilities_msgs::srv::SetConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<config_utilities_msgs::srv::SetConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__TRAITS_HPP_
