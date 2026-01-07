// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kimera_pgmo_msgs:msg/AbsolutePoseStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/absolute_pose_stamped.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__BUILDER_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kimera_pgmo_msgs/msg/detail/absolute_pose_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kimera_pgmo_msgs
{

namespace msg
{

namespace builder
{

class Init_AbsolutePoseStamped_pose
{
public:
  explicit Init_AbsolutePoseStamped_pose(::kimera_pgmo_msgs::msg::AbsolutePoseStamped & msg)
  : msg_(msg)
  {}
  ::kimera_pgmo_msgs::msg::AbsolutePoseStamped pose(::kimera_pgmo_msgs::msg::AbsolutePoseStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::AbsolutePoseStamped msg_;
};

class Init_AbsolutePoseStamped_idx
{
public:
  explicit Init_AbsolutePoseStamped_idx(::kimera_pgmo_msgs::msg::AbsolutePoseStamped & msg)
  : msg_(msg)
  {}
  Init_AbsolutePoseStamped_pose idx(::kimera_pgmo_msgs::msg::AbsolutePoseStamped::_idx_type arg)
  {
    msg_.idx = std::move(arg);
    return Init_AbsolutePoseStamped_pose(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::AbsolutePoseStamped msg_;
};

class Init_AbsolutePoseStamped_header
{
public:
  Init_AbsolutePoseStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AbsolutePoseStamped_idx header(::kimera_pgmo_msgs::msg::AbsolutePoseStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AbsolutePoseStamped_idx(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::AbsolutePoseStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::msg::AbsolutePoseStamped>()
{
  return kimera_pgmo_msgs::msg::builder::Init_AbsolutePoseStamped_header();
}

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__ABSOLUTE_POSE_STAMPED__BUILDER_HPP_
