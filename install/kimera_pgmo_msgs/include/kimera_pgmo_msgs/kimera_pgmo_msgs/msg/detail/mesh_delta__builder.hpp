// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh_delta.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__BUILDER_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kimera_pgmo_msgs/msg/detail/mesh_delta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kimera_pgmo_msgs
{

namespace msg
{

namespace builder
{

class Init_MeshDelta_sequence_number
{
public:
  explicit Init_MeshDelta_sequence_number(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  ::kimera_pgmo_msgs::msg::MeshDelta sequence_number(::kimera_pgmo_msgs::msg::MeshDelta::_sequence_number_type arg)
  {
    msg_.sequence_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_face_start
{
public:
  explicit Init_MeshDelta_face_start(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_sequence_number face_start(::kimera_pgmo_msgs::msg::MeshDelta::_face_start_type arg)
  {
    msg_.face_start = std::move(arg);
    return Init_MeshDelta_sequence_number(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_vertex_start
{
public:
  explicit Init_MeshDelta_vertex_start(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_face_start vertex_start(::kimera_pgmo_msgs::msg::MeshDelta::_vertex_start_type arg)
  {
    msg_.vertex_start = std::move(arg);
    return Init_MeshDelta_face_start(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_curr_indices
{
public:
  explicit Init_MeshDelta_curr_indices(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_vertex_start curr_indices(::kimera_pgmo_msgs::msg::MeshDelta::_curr_indices_type arg)
  {
    msg_.curr_indices = std::move(arg);
    return Init_MeshDelta_vertex_start(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_prev_indices
{
public:
  explicit Init_MeshDelta_prev_indices(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_curr_indices prev_indices(::kimera_pgmo_msgs::msg::MeshDelta::_prev_indices_type arg)
  {
    msg_.prev_indices = std::move(arg);
    return Init_MeshDelta_curr_indices(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_deleted_indices
{
public:
  explicit Init_MeshDelta_deleted_indices(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_prev_indices deleted_indices(::kimera_pgmo_msgs::msg::MeshDelta::_deleted_indices_type arg)
  {
    msg_.deleted_indices = std::move(arg);
    return Init_MeshDelta_prev_indices(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_face_archive_updates
{
public:
  explicit Init_MeshDelta_face_archive_updates(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_deleted_indices face_archive_updates(::kimera_pgmo_msgs::msg::MeshDelta::_face_archive_updates_type arg)
  {
    msg_.face_archive_updates = std::move(arg);
    return Init_MeshDelta_deleted_indices(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_face_updates
{
public:
  explicit Init_MeshDelta_face_updates(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_face_archive_updates face_updates(::kimera_pgmo_msgs::msg::MeshDelta::_face_updates_type arg)
  {
    msg_.face_updates = std::move(arg);
    return Init_MeshDelta_face_archive_updates(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_semantic_updates
{
public:
  explicit Init_MeshDelta_semantic_updates(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_face_updates semantic_updates(::kimera_pgmo_msgs::msg::MeshDelta::_semantic_updates_type arg)
  {
    msg_.semantic_updates = std::move(arg);
    return Init_MeshDelta_face_updates(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_stamp_updates
{
public:
  explicit Init_MeshDelta_stamp_updates(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_semantic_updates stamp_updates(::kimera_pgmo_msgs::msg::MeshDelta::_stamp_updates_type arg)
  {
    msg_.stamp_updates = std::move(arg);
    return Init_MeshDelta_semantic_updates(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_vertex_updates_colors
{
public:
  explicit Init_MeshDelta_vertex_updates_colors(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_stamp_updates vertex_updates_colors(::kimera_pgmo_msgs::msg::MeshDelta::_vertex_updates_colors_type arg)
  {
    msg_.vertex_updates_colors = std::move(arg);
    return Init_MeshDelta_stamp_updates(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_vertex_updates
{
public:
  explicit Init_MeshDelta_vertex_updates(::kimera_pgmo_msgs::msg::MeshDelta & msg)
  : msg_(msg)
  {}
  Init_MeshDelta_vertex_updates_colors vertex_updates(::kimera_pgmo_msgs::msg::MeshDelta::_vertex_updates_type arg)
  {
    msg_.vertex_updates = std::move(arg);
    return Init_MeshDelta_vertex_updates_colors(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

class Init_MeshDelta_header
{
public:
  Init_MeshDelta_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeshDelta_vertex_updates header(::kimera_pgmo_msgs::msg::MeshDelta::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MeshDelta_vertex_updates(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::MeshDelta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::msg::MeshDelta>()
{
  return kimera_pgmo_msgs::msg::builder::Init_MeshDelta_header();
}

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__BUILDER_HPP_
