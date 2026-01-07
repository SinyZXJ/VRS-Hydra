// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/LoopClosuresAck.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/loop_closures_ack.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/loop_closures_ack__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_LoopClosuresAck_frame_dst
{
public:
  explicit Init_LoopClosuresAck_frame_dst(::pose_graph_tools_msgs::msg::LoopClosuresAck & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::LoopClosuresAck frame_dst(::pose_graph_tools_msgs::msg::LoopClosuresAck::_frame_dst_type arg)
  {
    msg_.frame_dst = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosuresAck msg_;
};

class Init_LoopClosuresAck_robot_dst
{
public:
  explicit Init_LoopClosuresAck_robot_dst(::pose_graph_tools_msgs::msg::LoopClosuresAck & msg)
  : msg_(msg)
  {}
  Init_LoopClosuresAck_frame_dst robot_dst(::pose_graph_tools_msgs::msg::LoopClosuresAck::_robot_dst_type arg)
  {
    msg_.robot_dst = std::move(arg);
    return Init_LoopClosuresAck_frame_dst(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosuresAck msg_;
};

class Init_LoopClosuresAck_frame_src
{
public:
  explicit Init_LoopClosuresAck_frame_src(::pose_graph_tools_msgs::msg::LoopClosuresAck & msg)
  : msg_(msg)
  {}
  Init_LoopClosuresAck_robot_dst frame_src(::pose_graph_tools_msgs::msg::LoopClosuresAck::_frame_src_type arg)
  {
    msg_.frame_src = std::move(arg);
    return Init_LoopClosuresAck_robot_dst(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosuresAck msg_;
};

class Init_LoopClosuresAck_robot_src
{
public:
  explicit Init_LoopClosuresAck_robot_src(::pose_graph_tools_msgs::msg::LoopClosuresAck & msg)
  : msg_(msg)
  {}
  Init_LoopClosuresAck_frame_src robot_src(::pose_graph_tools_msgs::msg::LoopClosuresAck::_robot_src_type arg)
  {
    msg_.robot_src = std::move(arg);
    return Init_LoopClosuresAck_frame_src(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosuresAck msg_;
};

class Init_LoopClosuresAck_destination_robot_id
{
public:
  explicit Init_LoopClosuresAck_destination_robot_id(::pose_graph_tools_msgs::msg::LoopClosuresAck & msg)
  : msg_(msg)
  {}
  Init_LoopClosuresAck_robot_src destination_robot_id(::pose_graph_tools_msgs::msg::LoopClosuresAck::_destination_robot_id_type arg)
  {
    msg_.destination_robot_id = std::move(arg);
    return Init_LoopClosuresAck_robot_src(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosuresAck msg_;
};

class Init_LoopClosuresAck_publishing_robot_id
{
public:
  Init_LoopClosuresAck_publishing_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoopClosuresAck_destination_robot_id publishing_robot_id(::pose_graph_tools_msgs::msg::LoopClosuresAck::_publishing_robot_id_type arg)
  {
    msg_.publishing_robot_id = std::move(arg);
    return Init_LoopClosuresAck_destination_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::LoopClosuresAck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::LoopClosuresAck>()
{
  return pose_graph_tools_msgs::msg::builder::Init_LoopClosuresAck_publishing_robot_id();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__LOOP_CLOSURES_ACK__BUILDER_HPP_
