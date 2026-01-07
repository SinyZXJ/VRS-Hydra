// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/VLCFrames.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/vlc_frames.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/vlc_frames__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_VLCFrames_frames
{
public:
  explicit Init_VLCFrames_frames(::pose_graph_tools_msgs::msg::VLCFrames & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::VLCFrames frames(::pose_graph_tools_msgs::msg::VLCFrames::_frames_type arg)
  {
    msg_.frames = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrames msg_;
};

class Init_VLCFrames_destination_robot_id
{
public:
  explicit Init_VLCFrames_destination_robot_id(::pose_graph_tools_msgs::msg::VLCFrames & msg)
  : msg_(msg)
  {}
  Init_VLCFrames_frames destination_robot_id(::pose_graph_tools_msgs::msg::VLCFrames::_destination_robot_id_type arg)
  {
    msg_.destination_robot_id = std::move(arg);
    return Init_VLCFrames_frames(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrames msg_;
};

class Init_VLCFrames_header
{
public:
  Init_VLCFrames_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VLCFrames_destination_robot_id header(::pose_graph_tools_msgs::msg::VLCFrames::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VLCFrames_destination_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::VLCFrames msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::VLCFrames>()
{
  return pose_graph_tools_msgs::msg::builder::Init_VLCFrames_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__VLC_FRAMES__BUILDER_HPP_
