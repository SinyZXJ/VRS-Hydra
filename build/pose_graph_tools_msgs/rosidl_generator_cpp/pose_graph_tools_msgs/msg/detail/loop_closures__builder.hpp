// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/loop_closures.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/loop_closures__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_LoopClosures_edges
{
public:
  explicit Init_LoopClosures_edges(::pose_graph_tools_msgs::msg::LoopClosures & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::LoopClosures edges(::pose_graph_tools_msgs::msg::LoopClosures::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosures msg_;
};

class Init_LoopClosures_destination_robot_id
{
public:
  explicit Init_LoopClosures_destination_robot_id(::pose_graph_tools_msgs::msg::LoopClosures & msg)
  : msg_(msg)
  {}
  Init_LoopClosures_edges destination_robot_id(::pose_graph_tools_msgs::msg::LoopClosures::_destination_robot_id_type arg)
  {
    msg_.destination_robot_id = std::move(arg);
    return Init_LoopClosures_edges(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosures msg_;
};

class Init_LoopClosures_publishing_robot_id
{
public:
  Init_LoopClosures_publishing_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoopClosures_destination_robot_id publishing_robot_id(::pose_graph_tools_msgs::msg::LoopClosures::_publishing_robot_id_type arg)
  {
    msg_.publishing_robot_id = std::move(arg);
    return Init_LoopClosures_destination_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosures msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::LoopClosures>()
{
  return pose_graph_tools_msgs::msg::builder::Init_LoopClosures_publishing_robot_id();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES__BUILDER_HPP_
