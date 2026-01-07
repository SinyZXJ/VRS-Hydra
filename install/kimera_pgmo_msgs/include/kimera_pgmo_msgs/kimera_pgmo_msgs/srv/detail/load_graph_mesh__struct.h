// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kimera_pgmo_msgs:srv/LoadGraphMesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "kimera_pgmo_msgs/srv/load_graph_mesh.h"


#ifndef KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__STRUCT_H_
#define KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dgrf_file'
// Member 'ply_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadGraphMesh in the package kimera_pgmo_msgs.
typedef struct kimera_pgmo_msgs__srv__LoadGraphMesh_Request
{
  uint32_t robot_id;
  rosidl_runtime_c__String dgrf_file;
  rosidl_runtime_c__String ply_file;
} kimera_pgmo_msgs__srv__LoadGraphMesh_Request;

// Struct for a sequence of kimera_pgmo_msgs__srv__LoadGraphMesh_Request.
typedef struct kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/LoadGraphMesh in the package kimera_pgmo_msgs.
typedef struct kimera_pgmo_msgs__srv__LoadGraphMesh_Response
{
  bool success;
} kimera_pgmo_msgs__srv__LoadGraphMesh_Response;

// Struct for a sequence of kimera_pgmo_msgs__srv__LoadGraphMesh_Response.
typedef struct kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__request__MAX_SIZE = 1
};
// response
enum
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LoadGraphMesh in the package kimera_pgmo_msgs.
typedef struct kimera_pgmo_msgs__srv__LoadGraphMesh_Event
{
  service_msgs__msg__ServiceEventInfo info;
  kimera_pgmo_msgs__srv__LoadGraphMesh_Request__Sequence request;
  kimera_pgmo_msgs__srv__LoadGraphMesh_Response__Sequence response;
} kimera_pgmo_msgs__srv__LoadGraphMesh_Event;

// Struct for a sequence of kimera_pgmo_msgs__srv__LoadGraphMesh_Event.
typedef struct kimera_pgmo_msgs__srv__LoadGraphMesh_Event__Sequence
{
  kimera_pgmo_msgs__srv__LoadGraphMesh_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kimera_pgmo_msgs__srv__LoadGraphMesh_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KIMERA_PGMO_MSGS__SRV__DETAIL__LOAD_GRAPH_MESH__STRUCT_H_
