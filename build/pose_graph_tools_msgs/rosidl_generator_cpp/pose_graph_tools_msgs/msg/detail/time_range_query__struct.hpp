// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/msg/time_range_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_HPP_

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
// Member 'start'
// Member 'end'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__msg__TimeRangeQuery __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__msg__TimeRangeQuery __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeRangeQuery_
{
  using Type = TimeRangeQuery_<ContainerAllocator>;

  explicit TimeRangeQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    start(_init),
    end(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_robot_id = 0ul;
      this->destination_robot_id = 0ul;
    }
  }

  explicit TimeRangeQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    start(_alloc, _init),
    end(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source_robot_id = 0ul;
      this->destination_robot_id = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _source_robot_id_type =
    uint32_t;
  _source_robot_id_type source_robot_id;
  using _destination_robot_id_type =
    uint32_t;
  _destination_robot_id_type destination_robot_id;
  using _start_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_type end;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__source_robot_id(
    const uint32_t & _arg)
  {
    this->source_robot_id = _arg;
    return *this;
  }
  Type & set__destination_robot_id(
    const uint32_t & _arg)
  {
    this->destination_robot_id = _arg;
    return *this;
  }
  Type & set__start(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__msg__TimeRangeQuery
    std::shared_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__msg__TimeRangeQuery
    std::shared_ptr<pose_graph_tools_msgs::msg::TimeRangeQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeRangeQuery_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->source_robot_id != other.source_robot_id) {
      return false;
    }
    if (this->destination_robot_id != other.destination_robot_id) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeRangeQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeRangeQuery_

// alias to use template instance with default allocator
using TimeRangeQuery =
  pose_graph_tools_msgs::msg::TimeRangeQuery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__STRUCT_HPP_
