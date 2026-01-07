// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:srv/PoseGraphQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/pose_graph_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/srv/detail/pose_graph_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseGraphQuery_Request_robot_id
{
public:
  Init_PoseGraphQuery_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Request robot_id(::pose_graph_tools_msgs::srv::PoseGraphQuery_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::PoseGraphQuery_Request>()
{
  return pose_graph_tools_msgs::srv::builder::Init_PoseGraphQuery_Request_robot_id();
}

}  // namespace pose_graph_tools_msgs


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseGraphQuery_Response_pose_graph
{
public:
  Init_PoseGraphQuery_Response_pose_graph()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Response pose_graph(::pose_graph_tools_msgs::srv::PoseGraphQuery_Response::_pose_graph_type arg)
  {
    msg_.pose_graph = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::PoseGraphQuery_Response>()
{
  return pose_graph_tools_msgs::srv::builder::Init_PoseGraphQuery_Response_pose_graph();
}

}  // namespace pose_graph_tools_msgs


namespace pose_graph_tools_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseGraphQuery_Event_response
{
public:
  explicit Init_PoseGraphQuery_Event_response(::pose_graph_tools_msgs::srv::PoseGraphQuery_Event & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Event response(::pose_graph_tools_msgs::srv::PoseGraphQuery_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Event msg_;
};

class Init_PoseGraphQuery_Event_request
{
public:
  explicit Init_PoseGraphQuery_Event_request(::pose_graph_tools_msgs::srv::PoseGraphQuery_Event & msg)
  : msg_(msg)
  {}
  Init_PoseGraphQuery_Event_response request(::pose_graph_tools_msgs::srv::PoseGraphQuery_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PoseGraphQuery_Event_response(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Event msg_;
};

class Init_PoseGraphQuery_Event_info
{
public:
  Init_PoseGraphQuery_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseGraphQuery_Event_request info(::pose_graph_tools_msgs::srv::PoseGraphQuery_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PoseGraphQuery_Event_request(msg_);
  }

private:
  ::pose_graph_tools_msgs::srv::PoseGraphQuery_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::srv::PoseGraphQuery_Event>()
{
  return pose_graph_tools_msgs::srv::builder::Init_PoseGraphQuery_Event_info();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__BUILDER_HPP_
