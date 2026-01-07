// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kimera_pgmo_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__STRUCT_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'triangles'
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.hpp"
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'vertex_stamps'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'vertex_colors'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kimera_pgmo_msgs__msg__Mesh __attribute__((deprecated))
#else
# define DEPRECATED__kimera_pgmo_msgs__msg__Mesh __declspec(deprecated)
#endif

namespace kimera_pgmo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mesh_
{
  using Type = Mesh_<ContainerAllocator>;

  explicit Mesh_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
    }
  }

  explicit Mesh_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ns(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ns = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ns_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ns_type ns;
  using _triangles_type =
    std::vector<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>>;
  _triangles_type triangles;
  using _vertices_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _vertices_type vertices;
  using _vertex_stamps_type =
    std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>>;
  _vertex_stamps_type vertex_stamps;
  using _vertex_indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _vertex_indices_type vertex_indices;
  using _vertex_colors_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>>;
  _vertex_colors_type vertex_colors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ns(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ns = _arg;
    return *this;
  }
  Type & set__triangles(
    const std::vector<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>> & _arg)
  {
    this->triangles = _arg;
    return *this;
  }
  Type & set__vertices(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->vertices = _arg;
    return *this;
  }
  Type & set__vertex_stamps(
    const std::vector<builtin_interfaces::msg::Time_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<builtin_interfaces::msg::Time_<ContainerAllocator>>> & _arg)
  {
    this->vertex_stamps = _arg;
    return *this;
  }
  Type & set__vertex_indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->vertex_indices = _arg;
    return *this;
  }
  Type & set__vertex_colors(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>> & _arg)
  {
    this->vertex_colors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator> *;
  using ConstRawPtr =
    const kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kimera_pgmo_msgs__msg__Mesh
    std::shared_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kimera_pgmo_msgs__msg__Mesh
    std::shared_ptr<kimera_pgmo_msgs::msg::Mesh_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mesh_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ns != other.ns) {
      return false;
    }
    if (this->triangles != other.triangles) {
      return false;
    }
    if (this->vertices != other.vertices) {
      return false;
    }
    if (this->vertex_stamps != other.vertex_stamps) {
      return false;
    }
    if (this->vertex_indices != other.vertex_indices) {
      return false;
    }
    if (this->vertex_colors != other.vertex_colors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mesh_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mesh_

// alias to use template instance with default allocator
using Mesh =
  kimera_pgmo_msgs::msg::Mesh_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH__STRUCT_HPP_
