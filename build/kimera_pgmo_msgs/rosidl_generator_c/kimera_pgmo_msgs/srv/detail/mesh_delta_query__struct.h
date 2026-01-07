// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kimera_pgmo_msgs:srv/MeshDeltaQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/srv/mesh_delta_query.h"


#ifndef KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__STRUCT_H_
#define KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sequence_numbers'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MeshDeltaQuery in the package kimera_pgmo_msgs.
typedef struct kimera_pgmo_msgs__srv__MeshDeltaQuery_Request
{
  rosidl_runtime_c__uint16__Sequence sequence_numbers;
} kimera_pgmo_msgs__srv__MeshDeltaQuery_Request;

// Struct for a sequence of kimera_pgmo_msgs__srv__MeshDeltaQuery_Request.
typedef struct kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'deltas'
#include "kimera_pgmo_msgs/msg/detail/mesh_delta__struct.h"

/// Struct defined in srv/MeshDeltaQuery in the package kimera_pgmo_msgs.
typedef struct kimera_pgmo_msgs__srv__MeshDeltaQuery_Response
{
  kimera_pgmo_msgs__msg__MeshDelta__Sequence deltas;
} kimera_pgmo_msgs__srv__MeshDeltaQuery_Response;

// Struct for a sequence of kimera_pgmo_msgs__srv__MeshDeltaQuery_Response.
typedef struct kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__request__MAX_SIZE = 1
};
// response
enum
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MeshDeltaQuery in the package kimera_pgmo_msgs.
typedef struct kimera_pgmo_msgs__srv__MeshDeltaQuery_Event
{
  service_msgs__msg__ServiceEventInfo info;
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Request__Sequence request;
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Response__Sequence response;
} kimera_pgmo_msgs__srv__MeshDeltaQuery_Event;

// Struct for a sequence of kimera_pgmo_msgs__srv__MeshDeltaQuery_Event.
typedef struct kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence
{
  kimera_pgmo_msgs__srv__MeshDeltaQuery_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__srv__MeshDeltaQuery_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KIMERA_PGMO_MSGS__SRV__DETAIL__MESH_DELTA_QUERY__STRUCT_H_
