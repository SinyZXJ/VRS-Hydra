// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/PoseGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/pose_graph.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/pose_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseGraph_edges
{
public:
  explicit Init_PoseGraph_edges(::pose_graph_tools_msgs::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::PoseGraph edges(::pose_graph_tools_msgs::msg::PoseGraph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraph msg_;
};

class Init_PoseGraph_nodes
{
public:
  explicit Init_PoseGraph_nodes(::pose_graph_tools_msgs::msg::PoseGraph & msg)
  : msg_(msg)
  {}
  Init_PoseGraph_edges nodes(::pose_graph_tools_msgs::msg::PoseGraph::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_PoseGraph_edges(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraph msg_;
};

class Init_PoseGraph_header
{
public:
  Init_PoseGraph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraph_nodes header(::pose_graph_tools_msgs::msg::PoseGraph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseGraph_nodes(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::PoseGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::PoseGraph>()
{
  return pose_graph_tools_msgs::msg::builder::Init_PoseGraph_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__POSE_GRAPH__BUILDER_HPP_
