// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/node_label_update.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__BUILDER_HPP_
#define HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hydra_msgs/msg/detail/node_label_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hydra_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeLabelUpdate_label
{
public:
  explicit Init_NodeLabelUpdate_label(::hydra_msgs::msg::NodeLabelUpdate & msg)
  : msg_(msg)
  {}
  ::hydra_msgs::msg::NodeLabelUpdate label(::hydra_msgs::msg::NodeLabelUpdate::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::msg::NodeLabelUpdate msg_;
};

class Init_NodeLabelUpdate_node_id
{
public:
  Init_NodeLabelUpdate_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeLabelUpdate_label node_id(::hydra_msgs::msg::NodeLabelUpdate::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_NodeLabelUpdate_label(msg_);
  }

private:
  ::hydra_msgs::msg::NodeLabelUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::msg::NodeLabelUpdate>()
{
  return hydra_msgs::msg::builder::Init_NodeLabelUpdate_node_id();
}

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__BUILDER_HPP_
