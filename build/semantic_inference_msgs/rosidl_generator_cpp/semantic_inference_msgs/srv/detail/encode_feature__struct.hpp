// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from semantic_inference_msgs:srv/EncodeFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "semantic_inference_msgs/srv/encode_feature.hpp"


#ifndef SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__STRUCT_HPP_
#define SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Request __attribute__((deprecated))
#else
# define DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Request __declspec(deprecated)
#endif

namespace semantic_inference_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EncodeFeature_Request_
{
  using Type = EncodeFeature_Request_<ContainerAllocator>;

  explicit EncodeFeature_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  explicit EncodeFeature_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : prompt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prompt = "";
    }
  }

  // field types and members
  using _prompt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_type prompt;

  // setters for named parameter idiom
  Type & set__prompt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Request
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Request
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncodeFeature_Request_ & other) const
  {
    if (this->prompt != other.prompt) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncodeFeature_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncodeFeature_Request_

// alias to use template instance with default allocator
using EncodeFeature_Request =
  semantic_inference_msgs::srv::EncodeFeature_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace semantic_inference_msgs


// Include directives for member types
// Member 'feature'
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Response __attribute__((deprecated))
#else
# define DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Response __declspec(deprecated)
#endif

namespace semantic_inference_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EncodeFeature_Response_
{
  using Type = EncodeFeature_Response_<ContainerAllocator>;

  explicit EncodeFeature_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feature(_init)
  {
    (void)_init;
  }

  explicit EncodeFeature_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feature(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _feature_type =
    semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator>;
  _feature_type feature;

  // setters for named parameter idiom
  Type & set__feature(
    const semantic_inference_msgs::msg::FeatureVectorStamped_<ContainerAllocator> & _arg)
  {
    this->feature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Response
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Response
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncodeFeature_Response_ & other) const
  {
    if (this->feature != other.feature) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncodeFeature_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncodeFeature_Response_

// alias to use template instance with default allocator
using EncodeFeature_Response =
  semantic_inference_msgs::srv::EncodeFeature_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace semantic_inference_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Event __attribute__((deprecated))
#else
# define DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Event __declspec(deprecated)
#endif

namespace semantic_inference_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct EncodeFeature_Event_
{
  using Type = EncodeFeature_Event_<ContainerAllocator>;

  explicit EncodeFeature_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit EncodeFeature_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<semantic_inference_msgs::srv::EncodeFeature_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<semantic_inference_msgs::srv::EncodeFeature_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Event
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__semantic_inference_msgs__srv__EncodeFeature_Event
    std::shared_ptr<semantic_inference_msgs::srv::EncodeFeature_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncodeFeature_Event_ & other) const
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
  bool operator!=(const EncodeFeature_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncodeFeature_Event_

// alias to use template instance with default allocator
using EncodeFeature_Event =
  semantic_inference_msgs::srv::EncodeFeature_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace semantic_inference_msgs

namespace semantic_inference_msgs
{

namespace srv
{

struct EncodeFeature
{
  using Request = semantic_inference_msgs::srv::EncodeFeature_Request;
  using Response = semantic_inference_msgs::srv::EncodeFeature_Response;
  using Event = semantic_inference_msgs::srv::EncodeFeature_Event;
};

}  // namespace srv

}  // namespace semantic_inference_msgs

#endif  // SEMANTIC_INFERENCE_MSGS__SRV__DETAIL__ENCODE_FEATURE__STRUCT_HPP_
