// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/triangle_indices.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__BUILDER_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kimera_pgmo_msgs
{

namespace msg
{

namespace builder
{

class Init_TriangleIndices_vertex_indices
{
public:
  Init_TriangleIndices_vertex_indices()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kimera_pgmo_msgs::msg::TriangleIndices vertex_indices(::kimera_pgmo_msgs::msg::TriangleIndices::_vertex_indices_type arg)
  {
    msg_.vertex_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::TriangleIndices msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::msg::TriangleIndices>()
{
  return kimera_pgmo_msgs::msg::builder::Init_TriangleIndices_vertex_indices();
}

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__BUILDER_HPP_
