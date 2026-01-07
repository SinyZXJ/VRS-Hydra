// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/BowQueries.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_queries.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERIES__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/bow_queries__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_BowQueries_queries
{
public:
  explicit Init_BowQueries_queries(::pose_graph_tools_msgs::msg::BowQueries & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::BowQueries queries(::pose_graph_tools_msgs::msg::BowQueries::_queries_type arg)
  {
    msg_.queries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowQueries msg_;
};

class Init_BowQueries_destination_robot_id
{
public:
  explicit Init_BowQueries_destination_robot_id(::pose_graph_tools_msgs::msg::BowQueries & msg)
  : msg_(msg)
  {}
  Init_BowQueries_queries destination_robot_id(::pose_graph_tools_msgs::msg::BowQueries::_destination_robot_id_type arg)
  {
    msg_.destination_robot_id = std::move(arg);
    return Init_BowQueries_queries(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowQueries msg_;
};

class Init_BowQueries_header
{
public:
  Init_BowQueries_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BowQueries_destination_robot_id header(::pose_graph_tools_msgs::msg::BowQueries::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BowQueries_destination_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowQueries msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::BowQueries>()
{
  return pose_graph_tools_msgs::msg::builder::Init_BowQueries_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERIES__BUILDER_HPP_
