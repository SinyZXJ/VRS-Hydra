// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kimera_pgmo_msgs:msg/MeshDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/mesh_delta.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__STRUCT_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__STRUCT_HPP_

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
// Member 'vertex_updates'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'vertex_updates_colors'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"
// Member 'face_updates'
// Member 'face_archive_updates'
#include "kimera_pgmo_msgs/msg/detail/triangle_indices__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kimera_pgmo_msgs__msg__MeshDelta __attribute__((deprecated))
#else
# define DEPRECATED__kimera_pgmo_msgs__msg__MeshDelta __declspec(deprecated)
#endif

namespace kimera_pgmo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MeshDelta_
{
  using Type = MeshDelta_<ContainerAllocator>;

  explicit MeshDelta_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vertex_start = 0ull;
      this->face_start = 0ull;
      this->sequence_number = 0;
    }
  }

  explicit MeshDelta_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vertex_start = 0ull;
      this->face_start = 0ull;
      this->sequence_number = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vertex_updates_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _vertex_updates_type vertex_updates;
  using _vertex_updates_colors_type =
    std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>>;
  _vertex_updates_colors_type vertex_updates_colors;
  using _stamp_updates_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _stamp_updates_type stamp_updates;
  using _semantic_updates_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _semantic_updates_type semantic_updates;
  using _face_updates_type =
    std::vector<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>>;
  _face_updates_type face_updates;
  using _face_archive_updates_type =
    std::vector<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>>;
  _face_archive_updates_type face_archive_updates;
  using _deleted_indices_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _deleted_indices_type deleted_indices;
  using _prev_indices_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _prev_indices_type prev_indices;
  using _curr_indices_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _curr_indices_type curr_indices;
  using _vertex_start_type =
    uint64_t;
  _vertex_start_type vertex_start;
  using _face_start_type =
    uint64_t;
  _face_start_type face_start;
  using _sequence_number_type =
    uint16_t;
  _sequence_number_type sequence_number;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vertex_updates(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->vertex_updates = _arg;
    return *this;
  }
  Type & set__vertex_updates_colors(
    const std::vector<std_msgs::msg::ColorRGBA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std_msgs::msg::ColorRGBA_<ContainerAllocator>>> & _arg)
  {
    this->vertex_updates_colors = _arg;
    return *this;
  }
  Type & set__stamp_updates(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->stamp_updates = _arg;
    return *this;
  }
  Type & set__semantic_updates(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->semantic_updates = _arg;
    return *this;
  }
  Type & set__face_updates(
    const std::vector<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>> & _arg)
  {
    this->face_updates = _arg;
    return *this;
  }
  Type & set__face_archive_updates(
    const std::vector<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>> & _arg)
  {
    this->face_archive_updates = _arg;
    return *this;
  }
  Type & set__deleted_indices(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->deleted_indices = _arg;
    return *this;
  }
  Type & set__prev_indices(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->prev_indices = _arg;
    return *this;
  }
  Type & set__curr_indices(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->curr_indices = _arg;
    return *this;
  }
  Type & set__vertex_start(
    const uint64_t & _arg)
  {
    this->vertex_start = _arg;
    return *this;
  }
  Type & set__face_start(
    const uint64_t & _arg)
  {
    this->face_start = _arg;
    return *this;
  }
  Type & set__sequence_number(
    const uint16_t & _arg)
  {
    this->sequence_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator> *;
  using ConstRawPtr =
    const kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kimera_pgmo_msgs__msg__MeshDelta
    std::shared_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kimera_pgmo_msgs__msg__MeshDelta
    std::shared_ptr<kimera_pgmo_msgs::msg::MeshDelta_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeshDelta_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vertex_updates != other.vertex_updates) {
      return false;
    }
    if (this->vertex_updates_colors != other.vertex_updates_colors) {
      return false;
    }
    if (this->stamp_updates != other.stamp_updates) {
      return false;
    }
    if (this->semantic_updates != other.semantic_updates) {
      return false;
    }
    if (this->face_updates != other.face_updates) {
      return false;
    }
    if (this->face_archive_updates != other.face_archive_updates) {
      return false;
    }
    if (this->deleted_indices != other.deleted_indices) {
      return false;
    }
    if (this->prev_indices != other.prev_indices) {
      return false;
    }
    if (this->curr_indices != other.curr_indices) {
      return false;
    }
    if (this->vertex_start != other.vertex_start) {
      return false;
    }
    if (this->face_start != other.face_start) {
      return false;
    }
    if (this->sequence_number != other.sequence_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeshDelta_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeshDelta_

// alias to use template instance with default allocator
using MeshDelta =
  kimera_pgmo_msgs::msg::MeshDelta_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__MESH_DELTA__STRUCT_HPP_
