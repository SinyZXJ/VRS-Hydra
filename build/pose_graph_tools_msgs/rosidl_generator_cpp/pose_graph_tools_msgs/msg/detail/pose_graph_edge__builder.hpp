// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/PoseGraphEdge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph_edge.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/pose_graph_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseGraphEdge_covariance
{
public:
  explicit Init_PoseGraphEdge_covariance(::pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::PoseGraphEdge covariance(::pose_graph_tools_msgs::msg::PoseGraphEdge::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_pose
{
public:
  explicit Init_PoseGraphEdge_pose(::pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_covariance pose(::pose_graph_tools_msgs::msg::PoseGraphEdge::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseGraphEdge_covariance(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_type
{
public:
  explicit Init_PoseGraphEdge_type(::pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_pose type(::pose_graph_tools_msgs::msg::PoseGraphEdge::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PoseGraphEdge_pose(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_robot_to
{
public:
  explicit Init_PoseGraphEdge_robot_to(::pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_type robot_to(::pose_graph_tools_msgs::msg::PoseGraphEdge::_robot_to_type arg)
  {
    msg_.robot_to = std::move(arg);
    return Init_PoseGraphEdge_type(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_robot_from
{
public:
  explicit Init_PoseGraphEdge_robot_from(::pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_robot_to robot_from(::pose_graph_tools_msgs::msg::PoseGraphEdge::_robot_from_type arg)
  {
    msg_.robot_from = std::move(arg);
    return Init_PoseGraphEdge_robot_to(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_key_to
{
public:
  explicit Init_PoseGraphEdge_key_to(::pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_robot_from key_to(::pose_graph_tools_msgs::msg::PoseGraphEdge::_key_to_type arg)
  {
    msg_.key_to = std::move(arg);
    return Init_PoseGraphEdge_robot_from(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_key_from
{
public:
  explicit Init_PoseGraphEdge_key_from(::pose_graph_tools_msgs::msg::PoseGraphEdge & msg)
  : msg_(msg)
  {}
  Init_PoseGraphEdge_key_to key_from(::pose_graph_tools_msgs::msg::PoseGraphEdge::_key_from_type arg)
  {
    msg_.key_from = std::move(arg);
    return Init_PoseGraphEdge_key_to(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

class Init_PoseGraphEdge_header
{
public:
  Init_PoseGraphEdge_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraphEdge_key_from header(::pose_graph_tools_msgs::msg::PoseGraphEdge::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseGraphEdge_key_from(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::PoseGraphEdge>()
{
  return pose_graph_tools_msgs::msg::builder::Init_PoseGraphEdge_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_EDGE__BUILDER_HPP_
