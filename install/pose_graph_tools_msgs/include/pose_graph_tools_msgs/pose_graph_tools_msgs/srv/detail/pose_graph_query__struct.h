// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pose_graph_tools_msgs:srv/PoseGraphQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pose_graph_tools_msgs/srv/pose_graph_query.h"


#ifndef POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__STRUCT_H_
#define POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PoseGraphQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__PoseGraphQuery_Request
{
  uint16_t robot_id;
} pose_graph_tools_msgs__srv__PoseGraphQuery_Request;

// Struct for a sequence of pose_graph_tools_msgs__srv__PoseGraphQuery_Request.
typedef struct pose_graph_tools_msgs__srv__PoseGraphQuery_Request__Sequence
{
  pose_graph_tools_msgs__srv__PoseGraphQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__PoseGraphQuery_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'pose_graph'
#include "pose_graph_tools_msgs/msg/detail/pose_graph__struct.h"

/// Struct defined in srv/PoseGraphQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__PoseGraphQuery_Response
{
  pose_graph_tools_msgs__msg__PoseGraph pose_graph;
} pose_graph_tools_msgs__srv__PoseGraphQuery_Response;

// Struct for a sequence of pose_graph_tools_msgs__srv__PoseGraphQuery_Response.
typedef struct pose_graph_tools_msgs__srv__PoseGraphQuery_Response__Sequence
{
  pose_graph_tools_msgs__srv__PoseGraphQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__PoseGraphQuery_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pose_graph_tools_msgs__srv__PoseGraphQuery_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pose_graph_tools_msgs__srv__PoseGraphQuery_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PoseGraphQuery in the package pose_graph_tools_msgs.
typedef struct pose_graph_tools_msgs__srv__PoseGraphQuery_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pose_graph_tools_msgs__srv__PoseGraphQuery_Request__Sequence request;
  pose_graph_tools_msgs__srv__PoseGraphQuery_Response__Sequence response;
} pose_graph_tools_msgs__srv__PoseGraphQuery_Event;

// Struct for a sequence of pose_graph_tools_msgs__srv__PoseGraphQuery_Event.
typedef struct pose_graph_tools_msgs__srv__PoseGraphQuery_Event__Sequence
{
  pose_graph_tools_msgs__srv__PoseGraphQuery_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pose_graph_tools_msgs__srv__PoseGraphQuery_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POSE_GRAPH_TOOLS_MSGS__SRV__DETAIL__POSE_GRAPH_QUERY__STRUCT_H_
