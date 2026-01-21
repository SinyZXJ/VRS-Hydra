// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hydra_msgs:msg/PlaceNodeArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node_array.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__BUILDER_HPP_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hydra_msgs/msg/detail/place_node_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hydra_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaceNodeArray_nodes
{
public:
  explicit Init_PlaceNodeArray_nodes(::hydra_msgs::msg::PlaceNodeArray & msg)
  : msg_(msg)
  {}
  ::hydra_msgs::msg::PlaceNodeArray nodes(::hydra_msgs::msg::PlaceNodeArray::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hydra_msgs::msg::PlaceNodeArray msg_;
};

class Init_PlaceNodeArray_header
{
public:
  Init_PlaceNodeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaceNodeArray_nodes header(::hydra_msgs::msg::PlaceNodeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlaceNodeArray_nodes(msg_);
  }

private:
  ::hydra_msgs::msg::PlaceNodeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hydra_msgs::msg::PlaceNodeArray>()
{
  return hydra_msgs::msg::builder::Init_PlaceNodeArray_header();
}

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__BUILDER_HPP_
