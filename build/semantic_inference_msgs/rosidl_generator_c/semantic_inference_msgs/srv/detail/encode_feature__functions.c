// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from semantic_inference_msgs:srv/EncodeFeature.idl
// generated code does not contain a copyright notice
#include "semantic_inference_msgs/srv/detail/encode_feature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `prompt`
#include "rosidl_runtime_c/string_functions.h"

bool
semantic_inference_msgs__srv__EncodeFeature_Request__init(semantic_inference_msgs__srv__EncodeFeature_Request * msg)
{
  if (!msg) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    semantic_inference_msgs__srv__EncodeFeature_Request__fini(msg);
    return false;
  }
  return true;
}

void
semantic_inference_msgs__srv__EncodeFeature_Request__fini(semantic_inference_msgs__srv__EncodeFeature_Request * msg)
{
  if (!msg) {
    return;
  }
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
}

bool
semantic_inference_msgs__srv__EncodeFeature_Request__are_equal(const semantic_inference_msgs__srv__EncodeFeature_Request * lhs, const semantic_inference_msgs__srv__EncodeFeature_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt), &(rhs->prompt)))
  {
    return false;
  }
  return true;
}

bool
semantic_inference_msgs__srv__EncodeFeature_Request__copy(
  const semantic_inference_msgs__srv__EncodeFeature_Request * input,
  semantic_inference_msgs__srv__EncodeFeature_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt), &(output->prompt)))
  {
    return false;
  }
  return true;
}

semantic_inference_msgs__srv__EncodeFeature_Request *
semantic_inference_msgs__srv__EncodeFeature_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Request * msg = (semantic_inference_msgs__srv__EncodeFeature_Request *)allocator.allocate(sizeof(semantic_inference_msgs__srv__EncodeFeature_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semantic_inference_msgs__srv__EncodeFeature_Request));
  bool success = semantic_inference_msgs__srv__EncodeFeature_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semantic_inference_msgs__srv__EncodeFeature_Request__destroy(semantic_inference_msgs__srv__EncodeFeature_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semantic_inference_msgs__srv__EncodeFeature_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__init(semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Request * data = NULL;

  if (size) {
    data = (semantic_inference_msgs__srv__EncodeFeature_Request *)allocator.zero_allocate(size, sizeof(semantic_inference_msgs__srv__EncodeFeature_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semantic_inference_msgs__srv__EncodeFeature_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semantic_inference_msgs__srv__EncodeFeature_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__fini(semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      semantic_inference_msgs__srv__EncodeFeature_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

semantic_inference_msgs__srv__EncodeFeature_Request__Sequence *
semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * array = (semantic_inference_msgs__srv__EncodeFeature_Request__Sequence *)allocator.allocate(sizeof(semantic_inference_msgs__srv__EncodeFeature_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__destroy(semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__are_equal(const semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * lhs, const semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semantic_inference_msgs__srv__EncodeFeature_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__copy(
  const semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * input,
  semantic_inference_msgs__srv__EncodeFeature_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semantic_inference_msgs__srv__EncodeFeature_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semantic_inference_msgs__srv__EncodeFeature_Request * data =
      (semantic_inference_msgs__srv__EncodeFeature_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semantic_inference_msgs__srv__EncodeFeature_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semantic_inference_msgs__srv__EncodeFeature_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semantic_inference_msgs__srv__EncodeFeature_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feature`
#include "semantic_inference_msgs/msg/detail/feature_vector_stamped__functions.h"

bool
semantic_inference_msgs__srv__EncodeFeature_Response__init(semantic_inference_msgs__srv__EncodeFeature_Response * msg)
{
  if (!msg) {
    return false;
  }
  // feature
  if (!semantic_inference_msgs__msg__FeatureVectorStamped__init(&msg->feature)) {
    semantic_inference_msgs__srv__EncodeFeature_Response__fini(msg);
    return false;
  }
  return true;
}

void
semantic_inference_msgs__srv__EncodeFeature_Response__fini(semantic_inference_msgs__srv__EncodeFeature_Response * msg)
{
  if (!msg) {
    return;
  }
  // feature
  semantic_inference_msgs__msg__FeatureVectorStamped__fini(&msg->feature);
}

bool
semantic_inference_msgs__srv__EncodeFeature_Response__are_equal(const semantic_inference_msgs__srv__EncodeFeature_Response * lhs, const semantic_inference_msgs__srv__EncodeFeature_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feature
  if (!semantic_inference_msgs__msg__FeatureVectorStamped__are_equal(
      &(lhs->feature), &(rhs->feature)))
  {
    return false;
  }
  return true;
}

bool
semantic_inference_msgs__srv__EncodeFeature_Response__copy(
  const semantic_inference_msgs__srv__EncodeFeature_Response * input,
  semantic_inference_msgs__srv__EncodeFeature_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // feature
  if (!semantic_inference_msgs__msg__FeatureVectorStamped__copy(
      &(input->feature), &(output->feature)))
  {
    return false;
  }
  return true;
}

semantic_inference_msgs__srv__EncodeFeature_Response *
semantic_inference_msgs__srv__EncodeFeature_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Response * msg = (semantic_inference_msgs__srv__EncodeFeature_Response *)allocator.allocate(sizeof(semantic_inference_msgs__srv__EncodeFeature_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semantic_inference_msgs__srv__EncodeFeature_Response));
  bool success = semantic_inference_msgs__srv__EncodeFeature_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semantic_inference_msgs__srv__EncodeFeature_Response__destroy(semantic_inference_msgs__srv__EncodeFeature_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semantic_inference_msgs__srv__EncodeFeature_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__init(semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Response * data = NULL;

  if (size) {
    data = (semantic_inference_msgs__srv__EncodeFeature_Response *)allocator.zero_allocate(size, sizeof(semantic_inference_msgs__srv__EncodeFeature_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semantic_inference_msgs__srv__EncodeFeature_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semantic_inference_msgs__srv__EncodeFeature_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__fini(semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      semantic_inference_msgs__srv__EncodeFeature_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

semantic_inference_msgs__srv__EncodeFeature_Response__Sequence *
semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * array = (semantic_inference_msgs__srv__EncodeFeature_Response__Sequence *)allocator.allocate(sizeof(semantic_inference_msgs__srv__EncodeFeature_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__destroy(semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__are_equal(const semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * lhs, const semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semantic_inference_msgs__srv__EncodeFeature_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__copy(
  const semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * input,
  semantic_inference_msgs__srv__EncodeFeature_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semantic_inference_msgs__srv__EncodeFeature_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semantic_inference_msgs__srv__EncodeFeature_Response * data =
      (semantic_inference_msgs__srv__EncodeFeature_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semantic_inference_msgs__srv__EncodeFeature_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semantic_inference_msgs__srv__EncodeFeature_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semantic_inference_msgs__srv__EncodeFeature_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "semantic_inference_msgs/srv/detail/encode_feature__functions.h"

bool
semantic_inference_msgs__srv__EncodeFeature_Event__init(semantic_inference_msgs__srv__EncodeFeature_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    semantic_inference_msgs__srv__EncodeFeature_Event__fini(msg);
    return false;
  }
  // request
  if (!semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__init(&msg->request, 0)) {
    semantic_inference_msgs__srv__EncodeFeature_Event__fini(msg);
    return false;
  }
  // response
  if (!semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__init(&msg->response, 0)) {
    semantic_inference_msgs__srv__EncodeFeature_Event__fini(msg);
    return false;
  }
  return true;
}

void
semantic_inference_msgs__srv__EncodeFeature_Event__fini(semantic_inference_msgs__srv__EncodeFeature_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__fini(&msg->request);
  // response
  semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__fini(&msg->response);
}

bool
semantic_inference_msgs__srv__EncodeFeature_Event__are_equal(const semantic_inference_msgs__srv__EncodeFeature_Event * lhs, const semantic_inference_msgs__srv__EncodeFeature_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
semantic_inference_msgs__srv__EncodeFeature_Event__copy(
  const semantic_inference_msgs__srv__EncodeFeature_Event * input,
  semantic_inference_msgs__srv__EncodeFeature_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!semantic_inference_msgs__srv__EncodeFeature_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!semantic_inference_msgs__srv__EncodeFeature_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

semantic_inference_msgs__srv__EncodeFeature_Event *
semantic_inference_msgs__srv__EncodeFeature_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Event * msg = (semantic_inference_msgs__srv__EncodeFeature_Event *)allocator.allocate(sizeof(semantic_inference_msgs__srv__EncodeFeature_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(semantic_inference_msgs__srv__EncodeFeature_Event));
  bool success = semantic_inference_msgs__srv__EncodeFeature_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
semantic_inference_msgs__srv__EncodeFeature_Event__destroy(semantic_inference_msgs__srv__EncodeFeature_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    semantic_inference_msgs__srv__EncodeFeature_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__init(semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Event * data = NULL;

  if (size) {
    data = (semantic_inference_msgs__srv__EncodeFeature_Event *)allocator.zero_allocate(size, sizeof(semantic_inference_msgs__srv__EncodeFeature_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = semantic_inference_msgs__srv__EncodeFeature_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        semantic_inference_msgs__srv__EncodeFeature_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__fini(semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      semantic_inference_msgs__srv__EncodeFeature_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

semantic_inference_msgs__srv__EncodeFeature_Event__Sequence *
semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * array = (semantic_inference_msgs__srv__EncodeFeature_Event__Sequence *)allocator.allocate(sizeof(semantic_inference_msgs__srv__EncodeFeature_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__destroy(semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__are_equal(const semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * lhs, const semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!semantic_inference_msgs__srv__EncodeFeature_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
semantic_inference_msgs__srv__EncodeFeature_Event__Sequence__copy(
  const semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * input,
  semantic_inference_msgs__srv__EncodeFeature_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(semantic_inference_msgs__srv__EncodeFeature_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    semantic_inference_msgs__srv__EncodeFeature_Event * data =
      (semantic_inference_msgs__srv__EncodeFeature_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!semantic_inference_msgs__srv__EncodeFeature_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          semantic_inference_msgs__srv__EncodeFeature_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!semantic_inference_msgs__srv__EncodeFeature_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
