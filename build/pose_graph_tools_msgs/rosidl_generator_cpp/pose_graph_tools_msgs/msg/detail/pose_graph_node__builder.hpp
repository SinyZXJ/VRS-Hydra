// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/PoseGraphNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph_node.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/pose_graph_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseGraphNode_pose
{
public:
  explicit Init_PoseGraphNode_pose(::pose_graph_tools_msgs::msg::PoseGraphNode & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::PoseGraphNode pose(::pose_graph_tools_msgs::msg::PoseGraphNode::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphNode msg_;
};

class Init_PoseGraphNode_key
{
public:
  explicit Init_PoseGraphNode_key(::pose_graph_tools_msgs::msg::PoseGraphNode & msg)
  : msg_(msg)
  {}
  Init_PoseGraphNode_pose key(::pose_graph_tools_msgs::msg::PoseGraphNode::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_PoseGraphNode_pose(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphNode msg_;
};

class Init_PoseGraphNode_robot_id
{
public:
  explicit Init_PoseGraphNode_robot_id(::pose_graph_tools_msgs::msg::PoseGraphNode & msg)
  : msg_(msg)
  {}
  Init_PoseGraphNode_key robot_id(::pose_graph_tools_msgs::msg::PoseGraphNode::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_PoseGraphNode_key(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphNode msg_;
};

class Init_PoseGraphNode_header
{
public:
  Init_PoseGraphNode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraphNode_robot_id header(::pose_graph_tools_msgs::msg::PoseGraphNode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseGraphNode_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraphNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::PoseGraphNode>()
{
  return pose_graph_tools_msgs::msg::builder::Init_PoseGraphNode_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH_NODE__BUILDER_HPP_
