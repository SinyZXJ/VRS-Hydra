// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kimera_pgmo_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void LoadGraphMesh_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kimera_pgmo_msgs::srv::LoadGraphMesh_Request(_init);
}

void LoadGraphMesh_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kimera_pgmo_msgs::srv::LoadGraphMesh_Request *>(message_memory);
  typed_message->~LoadGraphMesh_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoadGraphMesh_Request_message_member_array[3] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::srv::LoadGraphMesh_Request, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dgrf_file",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::srv::LoadGraphMesh_Request, dgrf_file),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ply_file",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::srv::LoadGraphMesh_Request, ply_file),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoadGraphMesh_Request_message_members = {
  "kimera_pgmo_msgs::srv",  // message namespace
  "LoadGraphMesh_Request",  // message name
  3,  // number of fields
  sizeof(kimera_pgmo_msgs::srv::LoadGraphMesh_Request),
  false,  // has_any_key_member_
  LoadGraphMesh_Request_message_member_array,  // message members
  LoadGraphMesh_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadGraphMesh_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoadGraphMesh_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadGraphMesh_Request_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>()
{
  return &::kimera_pgmo_msgs::srv::rosidl_typesupport_introspection_cpp::LoadGraphMesh_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)() {
  return &::kimera_pgmo_msgs::srv::rosidl_typesupport_introspection_cpp::LoadGraphMesh_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kimera_pgmo_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void LoadGraphMesh_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kimera_pgmo_msgs::srv::LoadGraphMesh_Response(_init);
}

void LoadGraphMesh_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kimera_pgmo_msgs::srv::LoadGraphMesh_Response *>(message_memory);
  typed_message->~LoadGraphMesh_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoadGraphMesh_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::srv::LoadGraphMesh_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoadGraphMesh_Response_message_members = {
  "kimera_pgmo_msgs::srv",  // message namespace
  "LoadGraphMesh_Response",  // message name
  1,  // number of fields
  sizeof(kimera_pgmo_msgs::srv::LoadGraphMesh_Response),
  false,  // has_any_key_member_
  LoadGraphMesh_Response_message_member_array,  // message members
  LoadGraphMesh_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadGraphMesh_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoadGraphMesh_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadGraphMesh_Response_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>()
{
  return &::kimera_pgmo_msgs::srv::rosidl_typesupport_introspection_cpp::LoadGraphMesh_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)() {
  return &::kimera_pgmo_msgs::srv::rosidl_typesupport_introspection_cpp::LoadGraphMesh_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace kimera_pgmo_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void LoadGraphMesh_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) kimera_pgmo_msgs::srv::LoadGraphMesh_Event(_init);
}

void LoadGraphMesh_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<kimera_pgmo_msgs::srv::LoadGraphMesh_Event *>(message_memory);
  typed_message->~LoadGraphMesh_Event();
}

size_t size_function__LoadGraphMesh_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadGraphMesh_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadGraphMesh_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadGraphMesh_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const kimera_pgmo_msgs::srv::LoadGraphMesh_Request *>(
    get_const_function__LoadGraphMesh_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<kimera_pgmo_msgs::srv::LoadGraphMesh_Request *>(untyped_value);
  value = item;
}

void assign_function__LoadGraphMesh_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<kimera_pgmo_msgs::srv::LoadGraphMesh_Request *>(
    get_function__LoadGraphMesh_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const kimera_pgmo_msgs::srv::LoadGraphMesh_Request *>(untyped_value);
  item = value;
}

void resize_function__LoadGraphMesh_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoadGraphMesh_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadGraphMesh_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadGraphMesh_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadGraphMesh_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const kimera_pgmo_msgs::srv::LoadGraphMesh_Response *>(
    get_const_function__LoadGraphMesh_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<kimera_pgmo_msgs::srv::LoadGraphMesh_Response *>(untyped_value);
  value = item;
}

void assign_function__LoadGraphMesh_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<kimera_pgmo_msgs::srv::LoadGraphMesh_Response *>(
    get_function__LoadGraphMesh_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const kimera_pgmo_msgs::srv::LoadGraphMesh_Response *>(untyped_value);
  item = value;
}

void resize_function__LoadGraphMesh_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<kimera_pgmo_msgs::srv::LoadGraphMesh_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoadGraphMesh_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs::srv::LoadGraphMesh_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(kimera_pgmo_msgs::srv::LoadGraphMesh_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadGraphMesh_Event__request,  // size() function pointer
    get_const_function__LoadGraphMesh_Event__request,  // get_const(index) function pointer
    get_function__LoadGraphMesh_Event__request,  // get(index) function pointer
    fetch_function__LoadGraphMesh_Event__request,  // fetch(index, &value) function pointer
    assign_function__LoadGraphMesh_Event__request,  // assign(index, value) function pointer
    resize_function__LoadGraphMesh_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(kimera_pgmo_msgs::srv::LoadGraphMesh_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadGraphMesh_Event__response,  // size() function pointer
    get_const_function__LoadGraphMesh_Event__response,  // get_const(index) function pointer
    get_function__LoadGraphMesh_Event__response,  // get(index) function pointer
    fetch_function__LoadGraphMesh_Event__response,  // fetch(index, &value) function pointer
    assign_function__LoadGraphMesh_Event__response,  // assign(index, value) function pointer
    resize_function__LoadGraphMesh_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoadGraphMesh_Event_message_members = {
  "kimera_pgmo_msgs::srv",  // message namespace
  "LoadGraphMesh_Event",  // message name
  3,  // number of fields
  sizeof(kimera_pgmo_msgs::srv::LoadGraphMesh_Event),
  false,  // has_any_key_member_
  LoadGraphMesh_Event_message_member_array,  // message members
  LoadGraphMesh_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadGraphMesh_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoadGraphMesh_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadGraphMesh_Event_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Event>()
{
  return &::kimera_pgmo_msgs::srv::rosidl_typesupport_introspection_cpp::LoadGraphMesh_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, srv, LoadGraphMesh_Event)() {
  return &::kimera_pgmo_msgs::srv::rosidl_typesupport_introspection_cpp::LoadGraphMesh_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace kimera_pgmo_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers LoadGraphMesh_service_members = {
  "kimera_pgmo_msgs::srv",  // service namespace
  "LoadGraphMesh",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t LoadGraphMesh_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadGraphMesh_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<kimera_pgmo_msgs::srv::LoadGraphMesh>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<kimera_pgmo_msgs::srv::LoadGraphMesh>,
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace kimera_pgmo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::kimera_pgmo_msgs::srv::rosidl_typesupport_introspection_cpp::LoadGraphMesh_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::kimera_pgmo_msgs::srv::LoadGraphMesh_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::kimera_pgmo_msgs::srv::LoadGraphMesh_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::kimera_pgmo_msgs::srv::LoadGraphMesh_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, kimera_pgmo_msgs, srv, LoadGraphMesh)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<kimera_pgmo_msgs::srv::LoadGraphMesh>();
}

#ifdef __cplusplus
}
#endif
