// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from config_utilities_msgs:srv/SetConfig.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "config_utilities_msgs/srv/set_config.hpp"


#ifndef CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__BUILDER_HPP_
#define CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "config_utilities_msgs/srv/detail/set_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace config_utilities_msgs
{

namespace srv
{

namespace builder
{

class Init_SetConfig_Request_data
{
public:
  Init_SetConfig_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::config_utilities_msgs::srv::SetConfig_Request data(::config_utilities_msgs::srv::SetConfig_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::config_utilities_msgs::srv::SetConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::config_utilities_msgs::srv::SetConfig_Request>()
{
  return config_utilities_msgs::srv::builder::Init_SetConfig_Request_data();
}

}  // namespace config_utilities_msgs


namespace config_utilities_msgs
{

namespace srv
{

namespace builder
{

class Init_SetConfig_Response_data
{
public:
  Init_SetConfig_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::config_utilities_msgs::srv::SetConfig_Response data(::config_utilities_msgs::srv::SetConfig_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::config_utilities_msgs::srv::SetConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::config_utilities_msgs::srv::SetConfig_Response>()
{
  return config_utilities_msgs::srv::builder::Init_SetConfig_Response_data();
}

}  // namespace config_utilities_msgs


namespace config_utilities_msgs
{

namespace srv
{

namespace builder
{

class Init_SetConfig_Event_response
{
public:
  explicit Init_SetConfig_Event_response(::config_utilities_msgs::srv::SetConfig_Event & msg)
  : msg_(msg)
  {}
  ::config_utilities_msgs::srv::SetConfig_Event response(::config_utilities_msgs::srv::SetConfig_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::config_utilities_msgs::srv::SetConfig_Event msg_;
};

class Init_SetConfig_Event_request
{
public:
  explicit Init_SetConfig_Event_request(::config_utilities_msgs::srv::SetConfig_Event & msg)
  : msg_(msg)
  {}
  Init_SetConfig_Event_response request(::config_utilities_msgs::srv::SetConfig_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetConfig_Event_response(msg_);
  }

private:
  ::config_utilities_msgs::srv::SetConfig_Event msg_;
};

class Init_SetConfig_Event_info
{
public:
  Init_SetConfig_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetConfig_Event_request info(::config_utilities_msgs::srv::SetConfig_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetConfig_Event_request(msg_);
  }

private:
  ::config_utilities_msgs::srv::SetConfig_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::config_utilities_msgs::srv::SetConfig_Event>()
{
  return config_utilities_msgs::srv::builder::Init_SetConfig_Event_info();
}

}  // namespace config_utilities_msgs

#endif  // CONFIG_UTILITIES_MSGS__SRV__DETAIL__SET_CONFIG__BUILDER_HPP_
