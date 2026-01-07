// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydra_msgs:srv/GetDsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/srv/get_dsg.hpp"


#ifndef HYDRA_MSGS__SRV__DETAIL__GET_DSG__BUILDER_HPP_
#define HYDRA_MSGS__SRV__DETAIL__GET_DSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hydra_msgs/srv/detail/get_dsg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hydra_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::srv::GetDsg_Request>()
{
  return ::hydra_msgs::srv::GetDsg_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hydra_msgs


namespace hydra_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDsg_Response_graph
{
public:
  Init_GetDsg_Response_graph()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hydra_msgs::srv::GetDsg_Response graph(::hydra_msgs::srv::GetDsg_Response::_graph_type arg)
  {
    msg_.graph = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::srv::GetDsg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::srv::GetDsg_Response>()
{
  return hydra_msgs::srv::builder::Init_GetDsg_Response_graph();
}

}  // namespace hydra_msgs


namespace hydra_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDsg_Event_response
{
public:
  explicit Init_GetDsg_Event_response(::hydra_msgs::srv::GetDsg_Event & msg)
  : msg_(msg)
  {}
  ::hydra_msgs::srv::GetDsg_Event response(::hydra_msgs::srv::GetDsg_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::srv::GetDsg_Event msg_;
};

class Init_GetDsg_Event_request
{
public:
  explicit Init_GetDsg_Event_request(::hydra_msgs::srv::GetDsg_Event & msg)
  : msg_(msg)
  {}
  Init_GetDsg_Event_response request(::hydra_msgs::srv::GetDsg_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetDsg_Event_response(msg_);
  }

private:
  ::hydra_msgs::srv::GetDsg_Event msg_;
};

class Init_GetDsg_Event_info
{
public:
  Init_GetDsg_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDsg_Event_request info(::hydra_msgs::srv::GetDsg_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetDsg_Event_request(msg_);
  }

private:
  ::hydra_msgs::srv::GetDsg_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::srv::GetDsg_Event>()
{
  return hydra_msgs::srv::builder::Init_GetDsg_Event_info();
}

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__SRV__DETAIL__GET_DSG__BUILDER_HPP_
