// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/VLCFrameMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_frame_msg.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/vlc_frame_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_VLCFrameMsg_submap_from_pose
{
public:
  explicit Init_VLCFrameMsg_submap_from_pose(::pose_graph_tools_msgs::msg::VLCFrameMsg & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::VLCFrameMsg submap_from_pose(::pose_graph_tools_msgs::msg::VLCFrameMsg::_submap_from_pose_type arg)
  {
    msg_.submap_from_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrameMsg msg_;
};

class Init_VLCFrameMsg_depths
{
public:
  explicit Init_VLCFrameMsg_depths(::pose_graph_tools_msgs::msg::VLCFrameMsg & msg)
  : msg_(msg)
  {}
  Init_VLCFrameMsg_submap_from_pose depths(::pose_graph_tools_msgs::msg::VLCFrameMsg::_depths_type arg)
  {
    msg_.depths = std::move(arg);
    return Init_VLCFrameMsg_submap_from_pose(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrameMsg msg_;
};

class Init_VLCFrameMsg_versors
{
public:
  explicit Init_VLCFrameMsg_versors(::pose_graph_tools_msgs::msg::VLCFrameMsg & msg)
  : msg_(msg)
  {}
  Init_VLCFrameMsg_depths versors(::pose_graph_tools_msgs::msg::VLCFrameMsg::_versors_type arg)
  {
    msg_.versors = std::move(arg);
    return Init_VLCFrameMsg_depths(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrameMsg msg_;
};

class Init_VLCFrameMsg_descriptors_mat
{
public:
  explicit Init_VLCFrameMsg_descriptors_mat(::pose_graph_tools_msgs::msg::VLCFrameMsg & msg)
  : msg_(msg)
  {}
  Init_VLCFrameMsg_versors descriptors_mat(::pose_graph_tools_msgs::msg::VLCFrameMsg::_descriptors_mat_type arg)
  {
    msg_.descriptors_mat = std::move(arg);
    return Init_VLCFrameMsg_versors(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrameMsg msg_;
};

class Init_VLCFrameMsg_submap_id
{
public:
  explicit Init_VLCFrameMsg_submap_id(::pose_graph_tools_msgs::msg::VLCFrameMsg & msg)
  : msg_(msg)
  {}
  Init_VLCFrameMsg_descriptors_mat submap_id(::pose_graph_tools_msgs::msg::VLCFrameMsg::_submap_id_type arg)
  {
    msg_.submap_id = std::move(arg);
    return Init_VLCFrameMsg_descriptors_mat(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrameMsg msg_;
};

class Init_VLCFrameMsg_pose_id
{
public:
  explicit Init_VLCFrameMsg_pose_id(::pose_graph_tools_msgs::msg::VLCFrameMsg & msg)
  : msg_(msg)
  {}
  Init_VLCFrameMsg_submap_id pose_id(::pose_graph_tools_msgs::msg::VLCFrameMsg::_pose_id_type arg)
  {
    msg_.pose_id = std::move(arg);
    return Init_VLCFrameMsg_submap_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrameMsg msg_;
};

class Init_VLCFrameMsg_robot_id
{
public:
  Init_VLCFrameMsg_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VLCFrameMsg_pose_id robot_id(::pose_graph_tools_msgs::msg::VLCFrameMsg::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_VLCFrameMsg_pose_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrameMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::VLCFrameMsg>()
{
  return pose_graph_tools_msgs::msg::builder::Init_VLCFrameMsg_robot_id();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAME_MSG__BUILDER_HPP_
