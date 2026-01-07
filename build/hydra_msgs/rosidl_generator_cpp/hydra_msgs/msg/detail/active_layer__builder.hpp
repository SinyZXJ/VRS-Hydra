// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydra_msgs:msg/ActiveLayer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/active_layer.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__BUILDER_HPP_
#define HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hydra_msgs/msg/detail/active_layer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hydra_msgs
{

namespace msg
{

namespace builder
{

class Init_ActiveLayer_deleted_edges
{
public:
  explicit Init_ActiveLayer_deleted_edges(::hydra_msgs::msg::ActiveLayer & msg)
  : msg_(msg)
  {}
  ::hydra_msgs::msg::ActiveLayer deleted_edges(::hydra_msgs::msg::ActiveLayer::_deleted_edges_type arg)
  {
    msg_.deleted_edges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::msg::ActiveLayer msg_;
};

class Init_ActiveLayer_deleted_nodes
{
public:
  explicit Init_ActiveLayer_deleted_nodes(::hydra_msgs::msg::ActiveLayer & msg)
  : msg_(msg)
  {}
  Init_ActiveLayer_deleted_edges deleted_nodes(::hydra_msgs::msg::ActiveLayer::_deleted_nodes_type arg)
  {
    msg_.deleted_nodes = std::move(arg);
    return Init_ActiveLayer_deleted_edges(msg_);
  }

private:
  ::hydra_msgs::msg::ActiveLayer msg_;
};

class Init_ActiveLayer_layer_contents
{
public:
  explicit Init_ActiveLayer_layer_contents(::hydra_msgs::msg::ActiveLayer & msg)
  : msg_(msg)
  {}
  Init_ActiveLayer_deleted_nodes layer_contents(::hydra_msgs::msg::ActiveLayer::_layer_contents_type arg)
  {
    msg_.layer_contents = std::move(arg);
    return Init_ActiveLayer_deleted_nodes(msg_);
  }

private:
  ::hydra_msgs::msg::ActiveLayer msg_;
};

class Init_ActiveLayer_header
{
public:
  Init_ActiveLayer_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActiveLayer_layer_contents header(::hydra_msgs::msg::ActiveLayer::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActiveLayer_layer_contents(msg_);
  }

private:
  ::hydra_msgs::msg::ActiveLayer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::msg::ActiveLayer>()
{
  return hydra_msgs::msg::builder::Init_ActiveLayer_header();
}

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__ACTIVE_LAYER__BUILDER_HPP_
