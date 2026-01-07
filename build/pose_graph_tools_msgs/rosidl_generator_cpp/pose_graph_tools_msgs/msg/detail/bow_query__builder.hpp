// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/bow_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_BowQuery_bow_vector
{
public:
  explicit Init_BowQuery_bow_vector(::pose_graph_tools_msgs::msg::BowQuery & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::BowQuery bow_vector(::pose_graph_tools_msgs::msg::BowQuery::_bow_vector_type arg)
  {
    msg_.bow_vector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowQuery msg_;
};

class Init_BowQuery_pose_id
{
public:
  explicit Init_BowQuery_pose_id(::pose_graph_tools_msgs::msg::BowQuery & msg)
  : msg_(msg)
  {}
  Init_BowQuery_bow_vector pose_id(::pose_graph_tools_msgs::msg::BowQuery::_pose_id_type arg)
  {
    msg_.pose_id = std::move(arg);
    return Init_BowQuery_bow_vector(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowQuery msg_;
};

class Init_BowQuery_robot_id
{
public:
  Init_BowQuery_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BowQuery_pose_id robot_id(::pose_graph_tools_msgs::msg::BowQuery::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_BowQuery_pose_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::BowQuery>()
{
  return pose_graph_tools_msgs::msg::builder::Init_BowQuery_robot_id();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__BUILDER_HPP_
