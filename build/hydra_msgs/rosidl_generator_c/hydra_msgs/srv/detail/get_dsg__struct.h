// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hydra_msgs:srv/GetDsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "hydra_msgs/srv/get_dsg.h"


#ifndef HYDRA_MSGS__SRV__DETAIL__GET_DSG__STRUCT_H_
#define HYDRA_MSGS__SRV__DETAIL__GET_DSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetDsg in the package hydra_msgs.
typedef struct hydra_msgs__srv__GetDsg_Request
{
  uint8_t structure_needs_at_least_one_member;
} hydra_msgs__srv__GetDsg_Request;

// Struct for a sequence of hydra_msgs__srv__GetDsg_Request.
typedef struct hydra_msgs__srv__GetDsg_Request__Sequence
{
  hydra_msgs__srv__GetDsg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__srv__GetDsg_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'graph'
#include "hydra_msgs/msg/detail/dsg_update__struct.h"

/// Struct defined in srv/GetDsg in the package hydra_msgs.
typedef struct hydra_msgs__srv__GetDsg_Response
{
  hydra_msgs__msg__DsgUpdate graph;
} hydra_msgs__srv__GetDsg_Response;

// Struct for a sequence of hydra_msgs__srv__GetDsg_Response.
typedef struct hydra_msgs__srv__GetDsg_Response__Sequence
{
  hydra_msgs__srv__GetDsg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__srv__GetDsg_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  hydra_msgs__srv__GetDsg_Event__request__MAX_SIZE = 1
};
// response
enum
{
  hydra_msgs__srv__GetDsg_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetDsg in the package hydra_msgs.
typedef struct hydra_msgs__srv__GetDsg_Event
{
  service_msgs__msg__ServiceEventInfo info;
  hydra_msgs__srv__GetDsg_Request__Sequence request;
  hydra_msgs__srv__GetDsg_Response__Sequence response;
} hydra_msgs__srv__GetDsg_Event;

// Struct for a sequence of hydra_msgs__srv__GetDsg_Event.
typedef struct hydra_msgs__srv__GetDsg_Event__Sequence
{
  hydra_msgs__srv__GetDsg_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hydra_msgs__srv__GetDsg_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYDRA_MSGS__SRV__DETAIL__GET_DSG__STRUCT_H_
