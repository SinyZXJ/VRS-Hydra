// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kimera_pgmo_msgs:srv/MeshDeltaQuery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__rosidl_typesupport_introspection_c.h"
#include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__functions.h"
#include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__struct.h"


// Include directives for member types
// Member `sequence_numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__init(message_memory);
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__fini(message_memory);
}

size_t kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Request__sequence_numbers(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Request__sequence_numbers(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Request__sequence_numbers(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Request__sequence_numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Request__sequence_numbers(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Request__sequence_numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Request__sequence_numbers(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Request__sequence_numbers(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_member_array[1] = {
  {
    "sequence_numbers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request, sequence_numbers),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Request__sequence_numbers,  // size() function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Request__sequence_numbers,  // get_const(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Request__sequence_numbers,  // get(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Request__sequence_numbers,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Request__sequence_numbers,  // assign(index, value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Request__sequence_numbers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_members = {
  "kimera_pgmo_msgs__srv",  // message namespace
  "MeshDeltaQuery_Request",  // message name
  1,  // number of fields
  sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Request),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_member_array,  // message members
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__get_type_hash,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__get_type_description,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Request)() {
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__functions.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__struct.h"


// Include directives for member types
// Member `deltas`
#include "kimera_pgmo_msgs/msg/mesh_delta.h"
// Member `deltas`
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__init(message_memory);
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__fini(message_memory);
}

size_t kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Response__deltas(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__msg__MeshDelta__Sequence * member =
    (const kimera_pgmo_msgs__msg__MeshDelta__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Response__deltas(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__msg__MeshDelta__Sequence * member =
    (const kimera_pgmo_msgs__msg__MeshDelta__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Response__deltas(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__msg__MeshDelta__Sequence * member =
    (kimera_pgmo_msgs__msg__MeshDelta__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Response__deltas(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__msg__MeshDelta * item =
    ((const kimera_pgmo_msgs__msg__MeshDelta *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Response__deltas(untyped_member, index));
  kimera_pgmo_msgs__msg__MeshDelta * value =
    (kimera_pgmo_msgs__msg__MeshDelta *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Response__deltas(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__msg__MeshDelta * item =
    ((kimera_pgmo_msgs__msg__MeshDelta *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Response__deltas(untyped_member, index));
  const kimera_pgmo_msgs__msg__MeshDelta * value =
    (const kimera_pgmo_msgs__msg__MeshDelta *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Response__deltas(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__msg__MeshDelta__Sequence * member =
    (kimera_pgmo_msgs__msg__MeshDelta__Sequence *)(untyped_member);
  kimera_pgmo_msgs__msg__MeshDelta__Sequence__fini(member);
  return kimera_pgmo_msgs__msg__MeshDelta__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_member_array[1] = {
  {
    "deltas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response, deltas),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Response__deltas,  // size() function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Response__deltas,  // get_const(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Response__deltas,  // get(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Response__deltas,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Response__deltas,  // assign(index, value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Response__deltas  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_members = {
  "kimera_pgmo_msgs__srv",  // message namespace
  "MeshDeltaQuery_Response",  // message name
  1,  // number of fields
  sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Response),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_member_array,  // message members
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__get_type_hash,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__get_type_description,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Response)() {
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, msg, MeshDelta)();
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__functions.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "kimera_pgmo_msgs/srv/mesh_delta_query.h"
// Member `request`
// Member `response`
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__init(message_memory);
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_fini_function(void * message_memory)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__fini(message_memory);
}

size_t kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Event__request(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * member =
    (const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Event__request(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * member =
    (const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Event__request(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * member =
    (kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * item =
    ((const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Event__request(untyped_member, index));
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * value =
    (kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * item =
    ((kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Event__request(untyped_member, index));
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * value =
    (const kimera_pgmo_msgs__srv__MeshDeltaQuery_Request *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Event__request(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence * member =
    (kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence *)(untyped_member);
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__fini(member);
  return kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence__init(member, size);
}

size_t kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Event__response(
  const void * untyped_member)
{
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * member =
    (const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Event__response(
  const void * untyped_member, size_t index)
{
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * member =
    (const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Event__response(
  void * untyped_member, size_t index)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * member =
    (kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * item =
    ((const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Event__response(untyped_member, index));
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * value =
    (kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *)(untyped_value);
  *value = *item;
}

void kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * item =
    ((kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *)
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Event__response(untyped_member, index));
  const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * value =
    (const kimera_pgmo_msgs__srv__MeshDeltaQuery_Response *)(untyped_value);
  *item = *value;
}

bool kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Event__response(
  void * untyped_member, size_t size)
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence * member =
    (kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence *)(untyped_member);
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__fini(member);
  return kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event, info),  // bytes offset in struct
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
    offsetof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event, request),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Event__request,  // size() function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Event__request,  // get_const(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Event__request,  // get(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Event__request,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Event__request,  // assign(index, value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Event__request  // resize(index) function pointer
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
    offsetof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event, response),  // bytes offset in struct
    NULL,  // default value
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__size_function__MeshDeltaQuery_Event__response,  // size() function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_const_function__MeshDeltaQuery_Event__response,  // get_const(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__get_function__MeshDeltaQuery_Event__response,  // get(index) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__fetch_function__MeshDeltaQuery_Event__response,  // fetch(index, &value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__assign_function__MeshDeltaQuery_Event__response,  // assign(index, value) function pointer
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__resize_function__MeshDeltaQuery_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_members = {
  "kimera_pgmo_msgs__srv",  // message namespace
  "MeshDeltaQuery_Event",  // message name
  3,  // number of fields
  sizeof(kimera_pgmo_msgs__srv__MeshDeltaQuery_Event),
  false,  // has_any_key_member_
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_member_array,  // message members
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_members,
  get_message_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__get_type_hash,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__get_type_description,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Event)() {
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Request)();
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Response)();
  if (!kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kimera_pgmo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "kimera_pgmo_msgs/srv/detail/mesh_delta_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_service_members = {
  "kimera_pgmo_msgs__srv",  // service namespace
  "MeshDeltaQuery",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_type_support_handle,
  NULL,  // response message
  // kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_type_support_handle
  NULL  // event_message
  // kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_type_support_handle
};


static rosidl_service_type_support_t kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_service_type_support_handle = {
  0,
  &kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_service_members,
  get_service_typesupport_handle_function,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__rosidl_typesupport_introspection_c__MeshDeltaQuery_Request_message_type_support_handle,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__rosidl_typesupport_introspection_c__MeshDeltaQuery_Response_message_type_support_handle,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__rosidl_typesupport_introspection_c__MeshDeltaQuery_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kimera_pgmo_msgs,
    srv,
    MeshDeltaQuery
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    kimera_pgmo_msgs,
    srv,
    MeshDeltaQuery
  ),
  &kimera_pgmo_msgs__srv__MeshDeltaQuery__get_type_hash,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery__get_type_description,
  &kimera_pgmo_msgs__srv__MeshDeltaQuery__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kimera_pgmo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery)(void) {
  if (!kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_service_type_support_handle.typesupport_identifier) {
    kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kimera_pgmo_msgs, srv, MeshDeltaQuery_Event)()->data;
  }

  return &kimera_pgmo_msgs__srv__detail__mesh_delta_query__rosidl_typesupport_introspection_c__MeshDeltaQuery_service_type_support_handle;
}
