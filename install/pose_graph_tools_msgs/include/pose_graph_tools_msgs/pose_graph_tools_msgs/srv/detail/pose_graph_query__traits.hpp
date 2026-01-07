// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:srv/PoseGraphQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/pose_graph_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/srv/detail/pose_graph_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pose_graph_tools_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseGraphQuery_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseGraphQuery_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseGraphQuery_Request & msg, bool use_flow_style = false)
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

}  // namespace pose_graph_tools_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pose_graph_tools_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pose_graph_tools_msgs::srv::PoseGraphQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::srv::PoseGraphQuery_Request & msg)
{
  return pose_graph_tools_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>()
{
  return "pose_graph_tools_msgs::srv::PoseGraphQuery_Request";
}

template<>
inline const char * name<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>()
{
  return "pose_graph_tools_msgs/srv/PoseGraphQuery_Request";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose_graph'
#include "pose_graph_tools_msgs/msg/detail/pose_graph__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseGraphQuery_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_graph
  {
    out << "pose_graph: ";
    to_flow_style_yaml(msg.pose_graph, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseGraphQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_graph:\n";
    to_block_style_yaml(msg.pose_graph, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseGraphQuery_Response & msg, bool use_flow_style = false)
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

}  // namespace pose_graph_tools_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pose_graph_tools_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pose_graph_tools_msgs::srv::PoseGraphQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::srv::PoseGraphQuery_Response & msg)
{
  return pose_graph_tools_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>()
{
  return "pose_graph_tools_msgs::srv::PoseGraphQuery_Response";
}

template<>
inline const char * name<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>()
{
  return "pose_graph_tools_msgs/srv/PoseGraphQuery_Response";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>
  : std::integral_constant<bool, has_fixed_size<pose_graph_tools_msgs::msg::PoseGraph>::value> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>
  : std::integral_constant<bool, has_bounded_size<pose_graph_tools_msgs::msg::PoseGraph>::value> {};

template<>
struct is_message<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseGraphQuery_Event & msg,
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
  const PoseGraphQuery_Event & msg,
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

inline std::string to_yaml(const PoseGraphQuery_Event & msg, bool use_flow_style = false)
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

}  // namespace pose_graph_tools_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pose_graph_tools_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pose_graph_tools_msgs::srv::PoseGraphQuery_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::srv::PoseGraphQuery_Event & msg)
{
  return pose_graph_tools_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::srv::PoseGraphQuery_Event>()
{
  return "pose_graph_tools_msgs::srv::PoseGraphQuery_Event";
}

template<>
inline const char * name<pose_graph_tools_msgs::srv::PoseGraphQuery_Event>()
{
  return "pose_graph_tools_msgs/srv/PoseGraphQuery_Event";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Event>
  : std::integral_constant<bool, has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>::value && has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<pose_graph_tools_msgs::srv::PoseGraphQuery_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pose_graph_tools_msgs::srv::PoseGraphQuery>()
{
  return "pose_graph_tools_msgs::srv::PoseGraphQuery";
}

template<>
inline const char * name<pose_graph_tools_msgs::srv::PoseGraphQuery>()
{
  return "pose_graph_tools_msgs/srv/PoseGraphQuery";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::srv::PoseGraphQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>::value &&
    has_fixed_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>::value &&
    has_bounded_size<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>::value
  >
{
};

template<>
struct is_service<pose_graph_tools_msgs::srv::PoseGraphQuery>
  : std::true_type
{
};

template<>
struct is_service_request<pose_graph_tools_msgs::srv::PoseGraphQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pose_graph_tools_msgs::srv::PoseGraphQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__TRAITS_HPP_
