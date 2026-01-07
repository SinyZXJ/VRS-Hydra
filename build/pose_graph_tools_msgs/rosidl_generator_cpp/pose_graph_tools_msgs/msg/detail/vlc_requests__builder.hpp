// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/VLCRequests.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_requests.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/vlc_requests__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_VLCRequests_pose_ids
{
public:
  explicit Init_VLCRequests_pose_ids(::pose_graph_tools_msgs::msg::VLCRequests & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::VLCRequests pose_ids(::pose_graph_tools_msgs::msg::VLCRequests::_pose_ids_type arg)
  {
    msg_.pose_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCRequests msg_;
};

class Init_VLCRequests_destination_robot_id
{
public:
  explicit Init_VLCRequests_destination_robot_id(::pose_graph_tools_msgs::msg::VLCRequests & msg)
  : msg_(msg)
  {}
  Init_VLCRequests_pose_ids destination_robot_id(::pose_graph_tools_msgs::msg::VLCRequests::_destination_robot_id_type arg)
  {
    msg_.destination_robot_id = std::move(arg);
    return Init_VLCRequests_pose_ids(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCRequests msg_;
};

class Init_VLCRequests_source_robot_id
{
public:
  explicit Init_VLCRequests_source_robot_id(::pose_graph_tools_msgs::msg::VLCRequests & msg)
  : msg_(msg)
  {}
  Init_VLCRequests_destination_robot_id source_robot_id(::pose_graph_tools_msgs::msg::VLCRequests::_source_robot_id_type arg)
  {
    msg_.source_robot_id = std::move(arg);
    return Init_VLCRequests_destination_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCRequests msg_;
};

class Init_VLCRequests_header
{
public:
  Init_VLCRequests_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VLCRequests_source_robot_id header(::pose_graph_tools_msgs::msg::VLCRequests::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VLCRequests_source_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCRequests msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::VLCRequests>()
{
  return pose_graph_tools_msgs::msg::builder::Init_VLCRequests_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_REQUESTS__BUILDER_HPP_
