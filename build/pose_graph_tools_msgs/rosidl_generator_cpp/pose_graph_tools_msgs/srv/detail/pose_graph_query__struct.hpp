// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:srv/PoseGraphQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/pose_graph_query.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Request __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Request __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseGraphQuery_Request_
{
  using Type = PoseGraphQuery_Request_<ContainerAllocator>;

  explicit PoseGraphQuery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
    }
  }

  explicit PoseGraphQuery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
    }
  }

  // field types and members
  using _robot_id_type =
    uint16_t;
  _robot_id_type robot_id;

  // setters for named parameter idiom
  Type & set__robot_id(
    const uint16_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Request
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Request
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGraphQuery_Request_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGraphQuery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGraphQuery_Request_

// alias to use template instance with default allocator
using PoseGraphQuery_Request =
  pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs


// Include directives for member types
// Member 'pose_graph'
#include "pose_graph_tools_msgs/msg/detail/pose_graph__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Response __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Response __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseGraphQuery_Response_
{
  using Type = PoseGraphQuery_Response_<ContainerAllocator>;

  explicit PoseGraphQuery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_graph(_init)
  {
    (void)_init;
  }

  explicit PoseGraphQuery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_graph(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_graph_type =
    pose_graph_tools_msgs::msg::PoseGraph_<ContainerAllocator>;
  _pose_graph_type pose_graph;

  // setters for named parameter idiom
  Type & set__pose_graph(
    const pose_graph_tools_msgs::msg::PoseGraph_<ContainerAllocator> & _arg)
  {
    this->pose_graph = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Response
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Response
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGraphQuery_Response_ & other) const
  {
    if (this->pose_graph != other.pose_graph) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGraphQuery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGraphQuery_Response_

// alias to use template instance with default allocator
using PoseGraphQuery_Response =
  pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Event __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Event __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PoseGraphQuery_Event_
{
  using Type = PoseGraphQuery_Event_<ContainerAllocator>;

  explicit PoseGraphQuery_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PoseGraphQuery_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::PoseGraphQuery_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::PoseGraphQuery_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Event
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__PoseGraphQuery_Event
    std::shared_ptr<pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseGraphQuery_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseGraphQuery_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseGraphQuery_Event_

// alias to use template instance with default allocator
using PoseGraphQuery_Event =
  pose_graph_tools_msgs::srv::PoseGraphQuery_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs

namespace pose_graph_tools_msgs
{

namespace srv
{

struct PoseGraphQuery
{
  using Request = pose_graph_tools_msgs::srv::PoseGraphQuery_Request;
  using Response = pose_graph_tools_msgs::srv::PoseGraphQuery_Response;
  using Event = pose_graph_tools_msgs::srv::PoseGraphQuery_Event;
};

}  // namespace srv

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__STRUCT_HPP_
