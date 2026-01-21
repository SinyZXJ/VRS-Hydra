// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydra_msgs:msg/PlaceNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__BUILDER_HPP_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hydra_msgs/msg/detail/place_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hydra_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaceNode_position
{
public:
  explicit Init_PlaceNode_position(::hydra_msgs::msg::PlaceNode & msg)
  : msg_(msg)
  {}
  ::hydra_msgs::msg::PlaceNode position(::hydra_msgs::msg::PlaceNode::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::msg::PlaceNode msg_;
};

class Init_PlaceNode_node_id
{
public:
  Init_PlaceNode_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaceNode_position node_id(::hydra_msgs::msg::PlaceNode::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_PlaceNode_position(msg_);
  }

private:
  ::hydra_msgs::msg::PlaceNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::msg::PlaceNode>()
{
  return hydra_msgs::msg::builder::Init_PlaceNode_node_id();
}

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__BUILDER_HPP_
