// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/time_range_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/time_range_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeRangeQuery_end
{
public:
  explicit Init_TimeRangeQuery_end(::pose_graph_tools_msgs::msg::TimeRangeQuery & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::TimeRangeQuery end(::pose_graph_tools_msgs::msg::TimeRangeQuery::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::TimeRangeQuery msg_;
};

class Init_TimeRangeQuery_start
{
public:
  explicit Init_TimeRangeQuery_start(::pose_graph_tools_msgs::msg::TimeRangeQuery & msg)
  : msg_(msg)
  {}
  Init_TimeRangeQuery_end start(::pose_graph_tools_msgs::msg::TimeRangeQuery::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_TimeRangeQuery_end(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::TimeRangeQuery msg_;
};

class Init_TimeRangeQuery_destination_robot_id
{
public:
  explicit Init_TimeRangeQuery_destination_robot_id(::pose_graph_tools_msgs::msg::TimeRangeQuery & msg)
  : msg_(msg)
  {}
  Init_TimeRangeQuery_start destination_robot_id(::pose_graph_tools_msgs::msg::TimeRangeQuery::_destination_robot_id_type arg)
  {
    msg_.destination_robot_id = std::move(arg);
    return Init_TimeRangeQuery_start(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::TimeRangeQuery msg_;
};

class Init_TimeRangeQuery_source_robot_id
{
public:
  explicit Init_TimeRangeQuery_source_robot_id(::pose_graph_tools_msgs::msg::TimeRangeQuery & msg)
  : msg_(msg)
  {}
  Init_TimeRangeQuery_destination_robot_id source_robot_id(::pose_graph_tools_msgs::msg::TimeRangeQuery::_source_robot_id_type arg)
  {
    msg_.source_robot_id = std::move(arg);
    return Init_TimeRangeQuery_destination_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::TimeRangeQuery msg_;
};

class Init_TimeRangeQuery_header
{
public:
  Init_TimeRangeQuery_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeRangeQuery_source_robot_id header(::pose_graph_tools_msgs::msg::TimeRangeQuery::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TimeRangeQuery_source_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::TimeRangeQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::TimeRangeQuery>()
{
  return pose_graph_tools_msgs::msg::builder::Init_TimeRangeQuery_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__BUILDER_HPP_
