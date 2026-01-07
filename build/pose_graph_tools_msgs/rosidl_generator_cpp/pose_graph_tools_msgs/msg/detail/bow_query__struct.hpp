// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:msg/BowQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/bow_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bow_vector'
#include "pose_graph_tools_msgs/msg/detail/bow_vector__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__msg__BowQuery __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__msg__BowQuery __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BowQuery_
{
  using Type = BowQuery_<ContainerAllocator>;

  explicit BowQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bow_vector(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->pose_id = 0ul;
    }
  }

  explicit BowQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bow_vector(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0ul;
      this->pose_id = 0ul;
    }
  }

  // field types and members
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _pose_id_type =
    uint32_t;
  _pose_id_type pose_id;
  using _bow_vector_type =
    pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator>;
  _bow_vector_type bow_vector;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__pose_id(
    const uint32_t & _arg)
  {
    this->pose_id = _arg;
    return *this;
  }
  Type & set__bow_vector(
    const pose_graph_tools_msgs::msg::BowVector_<ContainerAllocator> & _arg)
  {
    this->bow_vector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__msg__BowQuery
    std::shared_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__msg__BowQuery
    std::shared_ptr<pose_graph_tools_msgs::msg::BowQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BowQuery_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->pose_id != other.pose_id) {
      return false;
    }
    if (this->bow_vector != other.bow_vector) {
      return false;
    }
    return true;
  }
  bool operator!=(const BowQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BowQuery_

// alias to use template instance with default allocator
using BowQuery =
  pose_graph_tools_msgs::msg::BowQuery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__BOW_QUERY__STRUCT_HPP_
