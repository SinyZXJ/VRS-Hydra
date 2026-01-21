// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hydra_msgs:msg/PlaceNode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__STRUCT_HPP_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydra_msgs__msg__PlaceNode __attribute__((deprecated))
#else
# define DEPRECATED__hydra_msgs__msg__PlaceNode __declspec(deprecated)
#endif

namespace hydra_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlaceNode_
{
  using Type = PlaceNode_<ContainerAllocator>;

  explicit PlaceNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
    }
  }

  explicit PlaceNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
    }
  }

  // field types and members
  using _node_id_type =
    uint64_t;
  _node_id_type node_id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__node_id(
    const uint64_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydra_msgs::msg::PlaceNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydra_msgs::msg::PlaceNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::PlaceNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::PlaceNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydra_msgs__msg__PlaceNode
    std::shared_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydra_msgs__msg__PlaceNode
    std::shared_ptr<hydra_msgs::msg::PlaceNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaceNode_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaceNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaceNode_

// alias to use template instance with default allocator
using PlaceNode =
  hydra_msgs::msg::PlaceNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE__STRUCT_HPP_
