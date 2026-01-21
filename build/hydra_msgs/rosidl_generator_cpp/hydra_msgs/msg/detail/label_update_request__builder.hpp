// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydra_msgs:msg/LabelUpdateRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/label_update_request.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__BUILDER_HPP_
#define HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hydra_msgs/msg/detail/label_update_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hydra_msgs
{

namespace msg
{

namespace builder
{

class Init_LabelUpdateRequest_updates
{
public:
  explicit Init_LabelUpdateRequest_updates(::hydra_msgs::msg::LabelUpdateRequest & msg)
  : msg_(msg)
  {}
  ::hydra_msgs::msg::LabelUpdateRequest updates(::hydra_msgs::msg::LabelUpdateRequest::_updates_type arg)
  {
    msg_.updates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::msg::LabelUpdateRequest msg_;
};

class Init_LabelUpdateRequest_header
{
public:
  Init_LabelUpdateRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LabelUpdateRequest_updates header(::hydra_msgs::msg::LabelUpdateRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LabelUpdateRequest_updates(msg_);
  }

private:
  ::hydra_msgs::msg::LabelUpdateRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::msg::LabelUpdateRequest>()
{
  return hydra_msgs::msg::builder::Init_LabelUpdateRequest_header();
}

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__LABEL_UPDATE_REQUEST__BUILDER_HPP_
