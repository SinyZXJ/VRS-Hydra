// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hydra_msgs:msg/NodeLabelUpdate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/msg/node_label_update.hpp"


#ifndef HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__STRUCT_HPP_
#define HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hydra_msgs__msg__NodeLabelUpdate __attribute__((deprecated))
#else
# define DEPRECATED__hydra_msgs__msg__NodeLabelUpdate __declspec(deprecated)
#endif

namespace hydra_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeLabelUpdate_
{
  using Type = NodeLabelUpdate_<ContainerAllocator>;

  explicit NodeLabelUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
      this->label = 0ul;
    }
  }

  explicit NodeLabelUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
      this->label = 0ul;
    }
  }

  // field types and members
  using _node_id_type =
    uint64_t;
  _node_id_type node_id;
  using _label_type =
    uint32_t;
  _label_type label;

  // setters for named parameter idiom
  Type & set__node_id(
    const uint64_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__label(
    const uint32_t & _arg)
  {
    this->label = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hydra_msgs__msg__NodeLabelUpdate
    std::shared_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hydra_msgs__msg__NodeLabelUpdate
    std::shared_ptr<hydra_msgs::msg::NodeLabelUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeLabelUpdate_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeLabelUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeLabelUpdate_

// alias to use template instance with default allocator
using NodeLabelUpdate =
  hydra_msgs::msg::NodeLabelUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hydra_msgs

#endif  // HYDRA_MSGS__MSG__DETAIL__NODE_LABEL_UPDATE__STRUCT_HPP_
