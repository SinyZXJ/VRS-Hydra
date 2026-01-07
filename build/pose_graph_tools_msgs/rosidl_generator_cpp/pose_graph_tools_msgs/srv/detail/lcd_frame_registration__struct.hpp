// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pose_graph_tools_msgs:srv/LcdFrameRegistration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/lcd_frame_registration.hpp"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__STRUCT_HPP_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Request __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Request __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LcdFrameRegistration_Request_
{
  using Type = LcdFrameRegistration_Request_<ContainerAllocator>;

  explicit LcdFrameRegistration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_robot = 0ull;
      this->match_robot = 0ull;
      this->query = 0ull;
      this->match = 0ull;
    }
  }

  explicit LcdFrameRegistration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->query_robot = 0ull;
      this->match_robot = 0ull;
      this->query = 0ull;
      this->match = 0ull;
    }
  }

  // field types and members
  using _query_robot_type =
    uint64_t;
  _query_robot_type query_robot;
  using _match_robot_type =
    uint64_t;
  _match_robot_type match_robot;
  using _query_type =
    uint64_t;
  _query_type query;
  using _match_type =
    uint64_t;
  _match_type match;

  // setters for named parameter idiom
  Type & set__query_robot(
    const uint64_t & _arg)
  {
    this->query_robot = _arg;
    return *this;
  }
  Type & set__match_robot(
    const uint64_t & _arg)
  {
    this->match_robot = _arg;
    return *this;
  }
  Type & set__query(
    const uint64_t & _arg)
  {
    this->query = _arg;
    return *this;
  }
  Type & set__match(
    const uint64_t & _arg)
  {
    this->match = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Request
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Request
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LcdFrameRegistration_Request_ & other) const
  {
    if (this->query_robot != other.query_robot) {
      return false;
    }
    if (this->match_robot != other.match_robot) {
      return false;
    }
    if (this->query != other.query) {
      return false;
    }
    if (this->match != other.match) {
      return false;
    }
    return true;
  }
  bool operator!=(const LcdFrameRegistration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LcdFrameRegistration_Request_

// alias to use template instance with default allocator
using LcdFrameRegistration_Request =
  pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs


// Include directives for member types
// Member 'match_from_query'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Response __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Response __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LcdFrameRegistration_Response_
{
  using Type = LcdFrameRegistration_Response_<ContainerAllocator>;

  explicit LcdFrameRegistration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : match_from_query(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  explicit LcdFrameRegistration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : match_from_query(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid = false;
    }
  }

  // field types and members
  using _valid_type =
    bool;
  _valid_type valid;
  using _match_from_query_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _match_from_query_type match_from_query;

  // setters for named parameter idiom
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__match_from_query(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->match_from_query = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Response
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Response
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LcdFrameRegistration_Response_ & other) const
  {
    if (this->valid != other.valid) {
      return false;
    }
    if (this->match_from_query != other.match_from_query) {
      return false;
    }
    return true;
  }
  bool operator!=(const LcdFrameRegistration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LcdFrameRegistration_Response_

// alias to use template instance with default allocator
using LcdFrameRegistration_Response =
  pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Event __attribute__((deprecated))
#else
# define DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Event __declspec(deprecated)
#endif

namespace pose_graph_tools_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LcdFrameRegistration_Event_
{
  using Type = LcdFrameRegistration_Event_<ContainerAllocator>;

  explicit LcdFrameRegistration_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LcdFrameRegistration_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::LcdFrameRegistration_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pose_graph_tools_msgs::srv::LcdFrameRegistration_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Event
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pose_graph_tools_msgs__srv__LcdFrameRegistration_Event
    std::shared_ptr<pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LcdFrameRegistration_Event_ & other) const
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
  bool operator!=(const LcdFrameRegistration_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LcdFrameRegistration_Event_

// alias to use template instance with default allocator
using LcdFrameRegistration_Event =
  pose_graph_tools_msgs::srv::LcdFrameRegistration_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pose_graph_tools_msgs

namespace pose_graph_tools_msgs
{

namespace srv
{

struct LcdFrameRegistration
{
  using Request = pose_graph_tools_msgs::srv::LcdFrameRegistration_Request;
  using Response = pose_graph_tools_msgs::srv::LcdFrameRegistration_Response;
  using Event = pose_graph_tools_msgs::srv::LcdFrameRegistration_Event;
};

}  // namespace srv

}  // namespace pose_graph_tools_msgs

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__LCD_FRAME_REGISTRATION__STRUCT_HPP_
