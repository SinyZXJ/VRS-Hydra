// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kimera_pgmo_msgs/msg/detail/mesh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kimera_pgmo_msgs
{

namespace msg
{

namespace builder
{

class Init_Mesh_vertex_colors
{
public:
  explicit Init_Mesh_vertex_colors(::kimera_pgmo_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  ::kimera_pgmo_msgs::msg::Mesh vertex_colors(::kimera_pgmo_msgs::msg::Mesh::_vertex_colors_type arg)
  {
    msg_.vertex_colors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::Mesh msg_;
};

class Init_Mesh_vertex_indices
{
public:
  explicit Init_Mesh_vertex_indices(::kimera_pgmo_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_vertex_colors vertex_indices(::kimera_pgmo_msgs::msg::Mesh::_vertex_indices_type arg)
  {
    msg_.vertex_indices = std::move(arg);
    return Init_Mesh_vertex_colors(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::Mesh msg_;
};

class Init_Mesh_vertex_stamps
{
public:
  explicit Init_Mesh_vertex_stamps(::kimera_pgmo_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_vertex_indices vertex_stamps(::kimera_pgmo_msgs::msg::Mesh::_vertex_stamps_type arg)
  {
    msg_.vertex_stamps = std::move(arg);
    return Init_Mesh_vertex_indices(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::Mesh msg_;
};

class Init_Mesh_vertices
{
public:
  explicit Init_Mesh_vertices(::kimera_pgmo_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_vertex_stamps vertices(::kimera_pgmo_msgs::msg::Mesh::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return Init_Mesh_vertex_stamps(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::Mesh msg_;
};

class Init_Mesh_triangles
{
public:
  explicit Init_Mesh_triangles(::kimera_pgmo_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_vertices triangles(::kimera_pgmo_msgs::msg::Mesh::_triangles_type arg)
  {
    msg_.triangles = std::move(arg);
    return Init_Mesh_vertices(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::Mesh msg_;
};

class Init_Mesh_ns
{
public:
  explicit Init_Mesh_ns(::kimera_pgmo_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_triangles ns(::kimera_pgmo_msgs::msg::Mesh::_ns_type arg)
  {
    msg_.ns = std::move(arg);
    return Init_Mesh_triangles(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::Mesh msg_;
};

class Init_Mesh_header
{
public:
  Init_Mesh_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mesh_ns header(::kimera_pgmo_msgs::msg::Mesh::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Mesh_ns(msg_);
  }

private:
  ::kimera_pgmo_msgs::msg::Mesh msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kimera_pgmo_msgs::msg::Mesh>()
{
  return kimera_pgmo_msgs::msg::builder::Init_Mesh_header();
}

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
