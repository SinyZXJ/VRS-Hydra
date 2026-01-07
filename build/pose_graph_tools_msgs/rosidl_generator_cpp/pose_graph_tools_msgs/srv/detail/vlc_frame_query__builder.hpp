// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:srv/VLCFrameQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/vlc_frame_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/srv/detail/vlc_frame_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_VLCFrameQuery_Request_pose_ids
{
public:
  explicit Init_VLCFrameQuery_Request_pose_ids(::pose_graph_tools_msgs::srv::VLCFrameQuery_Request & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Request pose_ids(::pose_graph_tools_msgs::srv::VLCFrameQuery_Request::_pose_ids_type arg)
  {
    msg_.pose_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Request msg_;
};

class Init_VLCFrameQuery_Request_robot_id
{
public:
  Init_VLCFrameQuery_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VLCFrameQuery_Request_pose_ids robot_id(::pose_graph_tools_msgs::srv::VLCFrameQuery_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_VLCFrameQuery_Request_pose_ids(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::VLCFrameQuery_Request>()
{
  return pose_graph_tools_msgs::srv::builder::Init_VLCFrameQuery_Request_robot_id();
}

}  // namespace pose_graph_tools_msgs


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_VLCFrameQuery_Response_frames
{
public:
  Init_VLCFrameQuery_Response_frames()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Response frames(::pose_graph_tools_msgs::srv::VLCFrameQuery_Response::_frames_type arg)
  {
    msg_.frames = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::VLCFrameQuery_Response>()
{
  return pose_graph_tools_msgs::srv::builder::Init_VLCFrameQuery_Response_frames();
}

}  // namespace pose_graph_tools_msgs


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_VLCFrameQuery_Event_response
{
public:
  explicit Init_VLCFrameQuery_Event_response(::pose_graph_tools_msgs::srv::VLCFrameQuery_Event & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Event response(::pose_graph_tools_msgs::srv::VLCFrameQuery_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Event msg_;
};

class Init_VLCFrameQuery_Event_request
{
public:
  explicit Init_VLCFrameQuery_Event_request(::pose_graph_tools_msgs::srv::VLCFrameQuery_Event & msg)
  : msg_(msg)
  {}
  Init_VLCFrameQuery_Event_response request(::pose_graph_tools_msgs::srv::VLCFrameQuery_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_VLCFrameQuery_Event_response(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Event msg_;
};

class Init_VLCFrameQuery_Event_info
{
public:
  Init_VLCFrameQuery_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VLCFrameQuery_Event_request info(::pose_graph_tools_msgs::srv::VLCFrameQuery_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_VLCFrameQuery_Event_request(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::VLCFrameQuery_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::VLCFrameQuery_Event>()
{
  return pose_graph_tools_msgs::srv::builder::Init_VLCFrameQuery_Event_info();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__VLC_FRAME_QUERY__BUILDER_HPP_
