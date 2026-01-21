// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hydra_msgs:msg/PlaceNodeArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/place_node_array.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__STRUCT_HPP_
#define HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__STRUCT_HPP_

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
// Member 'nodes'
#include "hydra_msgs/msg/detail/place_node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hydra_msgs__msg__PlaceNodeArray __attribute__((deprecated))
#else
# define DEPRECATED__hydra_msgs__msg__PlaceNodeArray __declspec(deprecated)
#endif

namespace hydra_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlaceNodeArray_
{
  using Type = PlaceNodeArray_<ContainerAllocator>;

  explicit PlaceNodeArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PlaceNodeArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nodes_type =
    std::vector<hydra_msgs::msg::PlaceNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hydra_msgs::msg::PlaceNode_<ContainerAllocator>>>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__nodes(
    const std::vector<hydra_msgs::msg::PlaceNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<hydra_msgs::msg::PlaceNode_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydra_msgs__msg__PlaceNodeArray
    std::shared_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydra_msgs__msg__PlaceNodeArray
    std::shared_ptr<hydra_msgs::msg::PlaceNodeArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaceNodeArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaceNodeArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaceNodeArray_

// alias to use template instance with default allocator
using PlaceNodeArray =
  hydra_msgs::msg::PlaceNodeArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__PLACE_NODE_ARRAY__STRUCT_HPP_
