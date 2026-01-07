// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pose_graph_tools_msgs:msg/BowRequests.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_requests.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_REQUESTS__BUILDER_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_REQUESTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pose_graph_tools_msgs/msg/detail/bow_requests__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pose_graph_tools_msgs
{

namespace msg
{

namespace builder
{

class Init_BowRequests_pose_ids
{
public:
  explicit Init_BowRequests_pose_ids(::pose_graph_tools_msgs::msg::BowRequests & msg)
  : msg_(msg)
  {}
  ::pose_graph_tools_msgs::msg::BowRequests pose_ids(::pose_graph_tools_msgs::msg::BowRequests::_pose_ids_type arg)
  {
    msg_.pose_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowRequests msg_;
};

class Init_BowRequests_destination_robot_id
{
public:
  explicit Init_BowRequests_destination_robot_id(::pose_graph_tools_msgs::msg::BowRequests & msg)
  : msg_(msg)
  {}
  Init_BowRequests_pose_ids destination_robot_id(::pose_graph_tools_msgs::msg::BowRequests::_destination_robot_id_type arg)
  {
    msg_.destination_robot_id = std::move(arg);
    return Init_BowRequests_pose_ids(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowRequests msg_;
};

class Init_BowRequests_source_robot_id
{
public:
  explicit Init_BowRequests_source_robot_id(::pose_graph_tools_msgs::msg::BowRequests & msg)
  : msg_(msg)
  {}
  Init_BowRequests_destination_robot_id source_robot_id(::pose_graph_tools_msgs::msg::BowRequests::_source_robot_id_type arg)
  {
    msg_.source_robot_id = std::move(arg);
    return Init_BowRequests_destination_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowRequests msg_;
};

class Init_BowRequests_header
{
public:
  Init_BowRequests_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BowRequests_source_robot_id header(::pose_graph_tools_msgs::msg::BowRequests::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BowRequests_source_robot_id(msg_);
  }

private:
  ::pose_graph_tools_msgs::msg::BowRequests msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pose_graph_tools_msgs::msg::BowRequests>()
{
  return pose_graph_tools_msgs::msg::builder::Init_BowRequests_header();
}

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_REQUESTS__BUILDER_HPP_
