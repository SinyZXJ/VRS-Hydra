// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__rosidl_typesupport_introspection_c.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
#include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.h"


// Include directives for member types
// Member `dgrf_file`
// Member `ply_file`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__init(message_memory);
}

void kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_member_array[3] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__LoadGraphMesh_Request, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dgrf_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__LoadGraphMesh_Request, dgrf_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ply_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__LoadGraphMesh_Request, ply_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_members = {
  "kimera_pgmo_msgs__srv",  // message namespace
  "LoadGraphMesh_Request",  // message name
  3,  // number of fields
  sizeof(kimera_pgmo_msgs__srv__LoadGraphMesh_Request),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_member_array,  // message members
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)() {
  if (!kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__init(message_memory);
}

void kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__LoadGraphMesh_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_members = {
  "kimera_pgmo_msgs__srv",  // message namespace
  "LoadGraphMesh_Response",  // message name
  1,  // number of fields
  sizeof(kimera_pgmo_msgs__srv__LoadGraphMesh_Response),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_member_array,  // message members
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)() {
  if (!kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__functions.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "kimera_pgmo_msgs/srv/load_graph_mesh.h"
// Member `request`
// Member `response`
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__init(message_memory);
}

void kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__fini(message_memory);
}

size_t kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__size_function__LoadGraphMesh_Event__request(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence * member =
    (const kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_const_function__LoadGraphMesh_Event__request(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence * member =
    (const kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_function__LoadGraphMesh_Event__request(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence * member =
    (kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__fetch_function__LoadGraphMesh_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request * item =
    ((const kimera_pgmo_msgs__srv__LoadGraphMesh_Request *)
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_const_function__LoadGraphMesh_Event__request(untyped_member, index));
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request * value =
    (kimera_pgmo_msgs__srv__LoadGraphMesh_Request *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__assign_function__LoadGraphMesh_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request * item =
    ((kimera_pgmo_msgs__srv__LoadGraphMesh_Request *)
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_function__LoadGraphMesh_Event__request(untyped_member, index));
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Request * value =
    (const kimera_pgmo_msgs__srv__LoadGraphMesh_Request *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__resize_function__LoadGraphMesh_Event__request(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence * member =
    (kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence *)(untyped_member);
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence__fini(member);
  return kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__size_function__LoadGraphMesh_Event__response(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence * member =
    (const kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_const_function__LoadGraphMesh_Event__response(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence * member =
    (const kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_function__LoadGraphMesh_Event__response(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence * member =
    (kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__fetch_function__LoadGraphMesh_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response * item =
    ((const kimera_pgmo_msgs__srv__LoadGraphMesh_Response *)
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_const_function__LoadGraphMesh_Event__response(untyped_member, index));
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response * value =
    (kimera_pgmo_msgs__srv__LoadGraphMesh_Response *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__assign_function__LoadGraphMesh_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response * item =
    ((kimera_pgmo_msgs__srv__LoadGraphMesh_Response *)
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_function__LoadGraphMesh_Event__response(untyped_member, index));
  const kimera_pgmo_msgs__srv__LoadGraphMesh_Response * value =
    (const kimera_pgmo_msgs__srv__LoadGraphMesh_Response *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__resize_function__LoadGraphMesh_Event__response(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence * member =
    (kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence *)(untyped_member);
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence__fini(member);
  return kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__LoadGraphMesh_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__LoadGraphMesh_Event, request),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__size_function__LoadGraphMesh_Event__request,  // size() function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_const_function__LoadGraphMesh_Event__request,  // get_const(index) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_function__LoadGraphMesh_Event__request,  // get(index) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__fetch_function__LoadGraphMesh_Event__request,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__assign_function__LoadGraphMesh_Event__request,  // assign(index, value) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__resize_function__LoadGraphMesh_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__LoadGraphMesh_Event, response),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__size_function__LoadGraphMesh_Event__response,  // size() function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_const_function__LoadGraphMesh_Event__response,  // get_const(index) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__get_function__LoadGraphMesh_Event__response,  // get(index) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__fetch_function__LoadGraphMesh_Event__response,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__assign_function__LoadGraphMesh_Event__response,  // assign(index, value) function pointer
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__resize_function__LoadGraphMesh_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_members = {
  "kimera_pgmo_msgs__srv",  // message namespace
  "LoadGraphMesh_Event",  // message name
  3,  // number of fields
  sizeof(kimera_pgmo_msgs__srv__LoadGraphMesh_Event),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_member_array,  // message members
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Event)() {
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)();
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)();
  if (!kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/load_graph_mesh__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_service_members = {
  "kimera_pgmo_msgs__srv",  // service namespace
  "LoadGraphMesh",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_type_support_handle,
  NULL,  // response message
  // kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_type_support_handle
  NULL  // event_message
  // kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_type_support_handle
};


static rosidl_service_type_support_t kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_service_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_service_members,
  get_service_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Request__rosidl_typesupport_introspection_c__LoadGraphMesh_Request_message_type_support_handle,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Response__rosidl_typesupport_introspection_c__LoadGraphMesh_Response_message_type_support_handle,
  &kimera_pgmo_msgs__srv__LoadGraphMesh_Event__rosidl_typesupport_introspection_c__LoadGraphMesh_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kimera_pgmo_msgs,
    srv,
    LoadGraphMesh
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kimera_pgmo_msgs,
    srv,
    LoadGraphMesh
  ),
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_hash,
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description,
  &kimera_pgmo_msgs__srv__LoadGraphMesh__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh)(void) {
  if (!kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_service_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, LoadGraphMesh_Event)()->data;
  }

  return &kimera_pgmo_msgs__srv__detail__load_graph_mesh__rosidl_typesupport_introspection_c__LoadGraphMesh_service_type_support_handle;
}
