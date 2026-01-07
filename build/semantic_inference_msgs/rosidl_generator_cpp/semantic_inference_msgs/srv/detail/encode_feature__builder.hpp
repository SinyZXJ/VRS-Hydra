// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semantic_inference_msgs:srv/EncodeFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/srv/encode_feature.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__BUILDER_HPP_
#define SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semantic_inference_msgs/srv/detail/encode_feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semantic_inference_msgs
{

namespace srv
{

namespace builder
{

class Init_EncodeFeature_Request_prompt
{
public:
  Init_EncodeFeature_Request_prompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::semantic_inference_msgs::srv::EncodeFeature_Request prompt(::semantic_inference_msgs::srv::EncodeFeature_Request::_prompt_type arg)
  {
    msg_.prompt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semantic_inference_msgs::srv::EncodeFeature_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::semantic_inference_msgs::srv::EncodeFeature_Request>()
{
  return semantic_inference_msgs::srv::builder::Init_EncodeFeature_Request_prompt();
}

}  // namespace semantic_inference_msgs


namespace semantic_inference_msgs
{

namespace srv
{

namespace builder
{

class Init_EncodeFeature_Response_feature
{
public:
  Init_EncodeFeature_Response_feature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::semantic_inference_msgs::srv::EncodeFeature_Response feature(::semantic_inference_msgs::srv::EncodeFeature_Response::_feature_type arg)
  {
    msg_.feature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semantic_inference_msgs::srv::EncodeFeature_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::semantic_inference_msgs::srv::EncodeFeature_Response>()
{
  return semantic_inference_msgs::srv::builder::Init_EncodeFeature_Response_feature();
}

}  // namespace semantic_inference_msgs


namespace semantic_inference_msgs
{

namespace srv
{

namespace builder
{

class Init_EncodeFeature_Event_response
{
public:
  explicit Init_EncodeFeature_Event_response(::semantic_inference_msgs::srv::EncodeFeature_Event & msg)
  : msg_(msg)
  {}
  ::semantic_inference_msgs::srv::EncodeFeature_Event response(::semantic_inference_msgs::srv::EncodeFeature_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semantic_inference_msgs::srv::EncodeFeature_Event msg_;
};

class Init_EncodeFeature_Event_request
{
public:
  explicit Init_EncodeFeature_Event_request(::semantic_inference_msgs::srv::EncodeFeature_Event & msg)
  : msg_(msg)
  {}
  Init_EncodeFeature_Event_response request(::semantic_inference_msgs::srv::EncodeFeature_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EncodeFeature_Event_response(msg_);
  }

private:
  ::semantic_inference_msgs::srv::EncodeFeature_Event msg_;
};

class Init_EncodeFeature_Event_info
{
public:
  Init_EncodeFeature_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncodeFeature_Event_request info(::semantic_inference_msgs::srv::EncodeFeature_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EncodeFeature_Event_request(msg_);
  }

private:
  ::semantic_inference_msgs::srv::EncodeFeature_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::semantic_inference_msgs::srv::EncodeFeature_Event>()
{
  return semantic_inference_msgs::srv::builder::Init_EncodeFeature_Event_info();
}

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__BUILDER_HPP_
