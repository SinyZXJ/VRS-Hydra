// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:srv/LcdFrameRegistration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/lcd_frame_registration.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/srv/detail/lcd_frame_registration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_LcdFrameRegistration_Request_match
{
public:
  explicit Init_LcdFrameRegistration_Request_match(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request match(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request::_match_type arg)
  {
    msg_.match = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request msg_;
};

class Init_LcdFrameRegistration_Request_query
{
public:
  explicit Init_LcdFrameRegistration_Request_query(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request & msg)
  : msg_(msg)
  {}
  Init_LcdFrameRegistration_Request_match query(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return Init_LcdFrameRegistration_Request_match(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request msg_;
};

class Init_LcdFrameRegistration_Request_match_robot
{
public:
  explicit Init_LcdFrameRegistration_Request_match_robot(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request & msg)
  : msg_(msg)
  {}
  Init_LcdFrameRegistration_Request_query match_robot(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request::_match_robot_type arg)
  {
    msg_.match_robot = std::move(arg);
    return Init_LcdFrameRegistration_Request_query(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request msg_;
};

class Init_LcdFrameRegistration_Request_query_robot
{
public:
  Init_LcdFrameRegistration_Request_query_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LcdFrameRegistration_Request_match_robot query_robot(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request::_query_robot_type arg)
  {
    msg_.query_robot = std::move(arg);
    return Init_LcdFrameRegistration_Request_match_robot(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::LcdFrameRegistration_Request>()
{
  return pose_graph_tools_msgs::srv::builder::Init_LcdFrameRegistration_Request_query_robot();
}

}  // namespace pose_graph_tools_msgs


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_LcdFrameRegistration_Response_match_from_query
{
public:
  explicit Init_LcdFrameRegistration_Response_match_from_query(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Response & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Response match_from_query(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Response::_match_from_query_type arg)
  {
    msg_.match_from_query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Response msg_;
};

class Init_LcdFrameRegistration_Response_valid
{
public:
  Init_LcdFrameRegistration_Response_valid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LcdFrameRegistration_Response_match_from_query valid(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Response::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_LcdFrameRegistration_Response_match_from_query(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::LcdFrameRegistration_Response>()
{
  return pose_graph_tools_msgs::srv::builder::Init_LcdFrameRegistration_Response_valid();
}

}  // namespace pose_graph_tools_msgs


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_LcdFrameRegistration_Event_response
{
public:
  explicit Init_LcdFrameRegistration_Event_response(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event response(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event msg_;
};

class Init_LcdFrameRegistration_Event_request
{
public:
  explicit Init_LcdFrameRegistration_Event_request(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event & msg)
  : msg_(msg)
  {}
  Init_LcdFrameRegistration_Event_response request(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LcdFrameRegistration_Event_response(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event msg_;
};

class Init_LcdFrameRegistration_Event_info
{
public:
  Init_LcdFrameRegistration_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LcdFrameRegistration_Event_request info(::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LcdFrameRegistration_Event_request(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::LcdFrameRegistration_Event>()
{
  return pose_graph_tools_msgs::srv::builder::Init_LcdFrameRegistration_Event_info();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__BUILDER_HPP_
