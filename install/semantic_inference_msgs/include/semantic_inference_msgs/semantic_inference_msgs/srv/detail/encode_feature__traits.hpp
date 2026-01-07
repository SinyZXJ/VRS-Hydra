// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semantic_inference_msgs:srv/EncodeFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/srv/encode_feature.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__TRAITS_HPP_
#define SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semantic_inference_msgs/srv/detail/encode_feature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace semantic_inference_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EncodeFeature_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: prompt
  {
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncodeFeature_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: prompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncodeFeature_Request & msg, bool use_flow_style = false)
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

}  // namespace semantic_inference_msgs

namespace rosidl_generator_traits
{

[[deprecated("use semantic_inference_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semantic_inference_msgs::srv::EncodeFeature_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  semantic_inference_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semantic_inference_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const semantic_inference_msgs::srv::EncodeFeature_Request & msg)
{
  return semantic_inference_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<semantic_inference_msgs::srv::EncodeFeature_Request>()
{
  return "semantic_inference_msgs::srv::EncodeFeature_Request";
}

template<>
inline const char * name<semantic_inference_msgs::srv::EncodeFeature_Request>()
{
  return "semantic_inference_msgs/srv/EncodeFeature_Request";
}

template<>
struct has_fixed_size<semantic_inference_msgs::srv::EncodeFeature_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semantic_inference_msgs::srv::EncodeFeature_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<semantic_inference_msgs::srv::EncodeFeature_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'feature'
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__traits.hpp"

namespace semantic_inference_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EncodeFeature_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: feature
  {
    out << "feature: ";
    to_flow_style_yaml(msg.feature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EncodeFeature_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feature:\n";
    to_block_style_yaml(msg.feature, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EncodeFeature_Response & msg, bool use_flow_style = false)
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

}  // namespace semantic_inference_msgs

namespace rosidl_generator_traits
{

[[deprecated("use semantic_inference_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semantic_inference_msgs::srv::EncodeFeature_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  semantic_inference_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semantic_inference_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const semantic_inference_msgs::srv::EncodeFeature_Response & msg)
{
  return semantic_inference_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<semantic_inference_msgs::srv::EncodeFeature_Response>()
{
  return "semantic_inference_msgs::srv::EncodeFeature_Response";
}

template<>
inline const char * name<semantic_inference_msgs::srv::EncodeFeature_Response>()
{
  return "semantic_inference_msgs/srv/EncodeFeature_Response";
}

template<>
struct has_fixed_size<semantic_inference_msgs::srv::EncodeFeature_Response>
  : std::integral_constant<bool, has_fixed_size<semantic_inference_msgs::msg::FeatureVectorStamped>::value> {};

template<>
struct has_bounded_size<semantic_inference_msgs::srv::EncodeFeature_Response>
  : std::integral_constant<bool, has_bounded_size<semantic_inference_msgs::msg::FeatureVectorStamped>::value> {};

template<>
struct is_message<semantic_inference_msgs::srv::EncodeFeature_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace semantic_inference_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const EncodeFeature_Event & msg,
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
  const EncodeFeature_Event & msg,
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

inline std::string to_yaml(const EncodeFeature_Event & msg, bool use_flow_style = false)
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

}  // namespace semantic_inference_msgs

namespace rosidl_generator_traits
{

[[deprecated("use semantic_inference_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semantic_inference_msgs::srv::EncodeFeature_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  semantic_inference_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semantic_inference_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const semantic_inference_msgs::srv::EncodeFeature_Event & msg)
{
  return semantic_inference_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<semantic_inference_msgs::srv::EncodeFeature_Event>()
{
  return "semantic_inference_msgs::srv::EncodeFeature_Event";
}

template<>
inline const char * name<semantic_inference_msgs::srv::EncodeFeature_Event>()
{
  return "semantic_inference_msgs/srv/EncodeFeature_Event";
}

template<>
struct has_fixed_size<semantic_inference_msgs::srv::EncodeFeature_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semantic_inference_msgs::srv::EncodeFeature_Event>
  : std::integral_constant<bool, has_bounded_size<semantic_inference_msgs::srv::EncodeFeature_Request>::value && has_bounded_size<semantic_inference_msgs::srv::EncodeFeature_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<semantic_inference_msgs::srv::EncodeFeature_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<semantic_inference_msgs::srv::EncodeFeature>()
{
  return "semantic_inference_msgs::srv::EncodeFeature";
}

template<>
inline const char * name<semantic_inference_msgs::srv::EncodeFeature>()
{
  return "semantic_inference_msgs/srv/EncodeFeature";
}

template<>
struct has_fixed_size<semantic_inference_msgs::srv::EncodeFeature>
  : std::integral_constant<
    bool,
    has_fixed_size<semantic_inference_msgs::srv::EncodeFeature_Request>::value &&
    has_fixed_size<semantic_inference_msgs::srv::EncodeFeature_Response>::value
  >
{
};

template<>
struct has_bounded_size<semantic_inference_msgs::srv::EncodeFeature>
  : std::integral_constant<
    bool,
    has_bounded_size<semantic_inference_msgs::srv::EncodeFeature_Request>::value &&
    has_bounded_size<semantic_inference_msgs::srv::EncodeFeature_Response>::value
  >
{
};

template<>
struct is_service<semantic_inference_msgs::srv::EncodeFeature>
  : std::true_type
{
};

template<>
struct is_service_request<semantic_inference_msgs::srv::EncodeFeature_Request>
  : std::true_type
{
};

template<>
struct is_service_response<semantic_inference_msgs::srv::EncodeFeature_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__TRAITS_HPP_
