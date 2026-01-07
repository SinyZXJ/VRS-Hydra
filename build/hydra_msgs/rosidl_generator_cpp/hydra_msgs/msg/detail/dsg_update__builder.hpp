// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydra_msgs:msg/DsgUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/dsg_update.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__BUILDER_HPP_
#define HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hydra_msgs/msg/detail/dsg_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hydra_msgs
{

namespace msg
{

namespace builder
{

class Init_DsgUpdate_sequence_number
{
public:
  explicit Init_DsgUpdate_sequence_number(::hydra_msgs::msg::DsgUpdate & msg)
  : msg_(msg)
  {}
  ::hydra_msgs::msg::DsgUpdate sequence_number(::hydra_msgs::msg::DsgUpdate::_sequence_number_type arg)
  {
    msg_.sequence_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::msg::DsgUpdate msg_;
};

class Init_DsgUpdate_full_update
{
public:
  explicit Init_DsgUpdate_full_update(::hydra_msgs::msg::DsgUpdate & msg)
  : msg_(msg)
  {}
  Init_DsgUpdate_sequence_number full_update(::hydra_msgs::msg::DsgUpdate::_full_update_type arg)
  {
    msg_.full_update = std::move(arg);
    return Init_DsgUpdate_sequence_number(msg_);
  }

private:
  ::hydra_msgs::msg::DsgUpdate msg_;
};

class Init_DsgUpdate_deleted_edges
{
public:
  explicit Init_DsgUpdate_deleted_edges(::hydra_msgs::msg::DsgUpdate & msg)
  : msg_(msg)
  {}
  Init_DsgUpdate_full_update deleted_edges(::hydra_msgs::msg::DsgUpdate::_deleted_edges_type arg)
  {
    msg_.deleted_edges = std::move(arg);
    return Init_DsgUpdate_full_update(msg_);
  }

private:
  ::hydra_msgs::msg::DsgUpdate msg_;
};

class Init_DsgUpdate_deleted_nodes
{
public:
  explicit Init_DsgUpdate_deleted_nodes(::hydra_msgs::msg::DsgUpdate & msg)
  : msg_(msg)
  {}
  Init_DsgUpdate_deleted_edges deleted_nodes(::hydra_msgs::msg::DsgUpdate::_deleted_nodes_type arg)
  {
    msg_.deleted_nodes = std::move(arg);
    return Init_DsgUpdate_deleted_edges(msg_);
  }

private:
  ::hydra_msgs::msg::DsgUpdate msg_;
};

class Init_DsgUpdate_layer_contents
{
public:
  explicit Init_DsgUpdate_layer_contents(::hydra_msgs::msg::DsgUpdate & msg)
  : msg_(msg)
  {}
  Init_DsgUpdate_deleted_nodes layer_contents(::hydra_msgs::msg::DsgUpdate::_layer_contents_type arg)
  {
    msg_.layer_contents = std::move(arg);
    return Init_DsgUpdate_deleted_nodes(msg_);
  }

private:
  ::hydra_msgs::msg::DsgUpdate msg_;
};

class Init_DsgUpdate_header
{
public:
  Init_DsgUpdate_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DsgUpdate_layer_contents header(::hydra_msgs::msg::DsgUpdate::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DsgUpdate_layer_contents(msg_);
  }

private:
  ::hydra_msgs::msg::DsgUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::msg::DsgUpdate>()
{
  return hydra_msgs::msg::builder::Init_DsgUpdate_header();
}

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__DSG_UPDATE__BUILDER_HPP_
