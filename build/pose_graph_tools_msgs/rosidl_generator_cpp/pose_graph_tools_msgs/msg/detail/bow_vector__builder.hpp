// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/BowVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_vector.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/bow_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_BowVector_word_values
{
public:
  explicit Init_BowVector_word_values(::pose_graph_tools_msgs::msg::BowVector & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::BowVector word_values(::pose_graph_tools_msgs::msg::BowVector::_word_values_type arg)
  {
    msg_.word_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowVector msg_;
};

class Init_BowVector_word_ids
{
public:
  Init_BowVector_word_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BowVector_word_values word_ids(::pose_graph_tools_msgs::msg::BowVector::_word_ids_type arg)
  {
    msg_.word_ids = std::move(arg);
    return Init_BowVector_word_values(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::BowVector>()
{
  return pose_graph_tools_msgs::msg::builder::Init_BowVector_word_ids();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_VECTOR__BUILDER_HPP_
