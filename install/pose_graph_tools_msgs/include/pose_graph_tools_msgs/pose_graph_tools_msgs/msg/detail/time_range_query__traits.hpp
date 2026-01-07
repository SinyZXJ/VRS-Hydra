// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pose_graph_tools_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/time_range_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__TRAITS_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pose_graph_tools_msgs/msg/detail/time_range_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start'
// Member 'end'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pose_graph_tools_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeRangeQuery & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: source_robot_id
  {
    out << "source_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_robot_id, out);
    out << ", ";
  }

  // member: destination_robot_id
  {
    out << "destination_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_robot_id, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    to_flow_style_yaml(msg.end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeRangeQuery & msg,
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

  // member: source_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_robot_id, out);
    out << "\n";
  }

  // member: destination_robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_robot_id, out);
    out << "\n";
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end:\n";
    to_block_style_yaml(msg.end, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeRangeQuery & msg, bool use_flow_style = false)
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

}  // namespace pose_graph_tools_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pose_graph_tools_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pose_graph_tools_msgs::msg::TimeRangeQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  pose_graph_tools_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pose_graph_tools_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pose_graph_tools_msgs::msg::TimeRangeQuery & msg)
{
  return pose_graph_tools_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pose_graph_tools_msgs::msg::TimeRangeQuery>()
{
  return "pose_graph_tools_msgs::msg::TimeRangeQuery";
}

template<>
inline const char * name<pose_graph_tools_msgs::msg::TimeRangeQuery>()
{
  return "pose_graph_tools_msgs/msg/TimeRangeQuery";
}

template<>
struct has_fixed_size<pose_graph_tools_msgs::msg::TimeRangeQuery>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pose_graph_tools_msgs::msg::TimeRangeQuery>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pose_graph_tools_msgs::msg::TimeRangeQuery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__TRAITS_HPP_
