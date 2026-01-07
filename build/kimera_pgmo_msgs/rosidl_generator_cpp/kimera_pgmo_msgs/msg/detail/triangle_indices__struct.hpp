// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kimera_pgmo_msgs:msg/TriangleIndices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/msg/triangle_indices.hpp"


#ifndef KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__STRUCT_HPP_
#define KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kimera_pgmo_msgs__msg__TriangleIndices __attribute__((deprecated))
#else
# define DEPRECATED__kimera_pgmo_msgs__msg__TriangleIndices __declspec(deprecated)
#endif

namespace kimera_pgmo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TriangleIndices_
{
  using Type = TriangleIndices_<ContainerAllocator>;

  explicit TriangleIndices_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->vertex_indices.begin(), this->vertex_indices.end(), 0ul);
    }
  }

  explicit TriangleIndices_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vertex_indices(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 3>::iterator, uint32_t>(this->vertex_indices.begin(), this->vertex_indices.end(), 0ul);
    }
  }

  // field types and members
  using _vertex_indices_type =
    std::array<uint32_t, 3>;
  _vertex_indices_type vertex_indices;

  // setters for named parameter idiom
  Type & set__vertex_indices(
    const std::array<uint32_t, 3> & _arg)
  {
    this->vertex_indices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator> *;
  using ConstRawPtr =
    const kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kimera_pgmo_msgs__msg__TriangleIndices
    std::shared_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kimera_pgmo_msgs__msg__TriangleIndices
    std::shared_ptr<kimera_pgmo_msgs::msg::TriangleIndices_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriangleIndices_ & other) const
  {
    if (this->vertex_indices != other.vertex_indices) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriangleIndices_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriangleIndices_

// alias to use template instance with default allocator
using TriangleIndices =
  kimera_pgmo_msgs::msg::TriangleIndices_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kimera_pgmo_msgs

#endif  // KIMERA_PGMO_MSGS__MSG__DETAIL__TRIANGLE_INDICES__STRUCT_HPP_
