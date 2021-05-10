// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from anro4_interface:srv/Interpolation.idl
// generated code does not contain a copyright notice
#include "anro4_interface/srv/detail/interpolation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `method`
#include "rosidl_runtime_c/string_functions.h"

bool
anro4_interface__srv__Interpolation_Request__init(anro4_interface__srv__Interpolation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position_joint1
  // position_joint2
  // position_joint3
  // interpolation_time
  // method
  if (!rosidl_runtime_c__String__init(&msg->method)) {
    anro4_interface__srv__Interpolation_Request__fini(msg);
    return false;
  }
  return true;
}

void
anro4_interface__srv__Interpolation_Request__fini(anro4_interface__srv__Interpolation_Request * msg)
{
  if (!msg) {
    return;
  }
  // position_joint1
  // position_joint2
  // position_joint3
  // interpolation_time
  // method
  rosidl_runtime_c__String__fini(&msg->method);
}

anro4_interface__srv__Interpolation_Request *
anro4_interface__srv__Interpolation_Request__create()
{
  anro4_interface__srv__Interpolation_Request * msg = (anro4_interface__srv__Interpolation_Request *)malloc(sizeof(anro4_interface__srv__Interpolation_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anro4_interface__srv__Interpolation_Request));
  bool success = anro4_interface__srv__Interpolation_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
anro4_interface__srv__Interpolation_Request__destroy(anro4_interface__srv__Interpolation_Request * msg)
{
  if (msg) {
    anro4_interface__srv__Interpolation_Request__fini(msg);
  }
  free(msg);
}


bool
anro4_interface__srv__Interpolation_Request__Sequence__init(anro4_interface__srv__Interpolation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  anro4_interface__srv__Interpolation_Request * data = NULL;
  if (size) {
    data = (anro4_interface__srv__Interpolation_Request *)calloc(size, sizeof(anro4_interface__srv__Interpolation_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anro4_interface__srv__Interpolation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anro4_interface__srv__Interpolation_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
anro4_interface__srv__Interpolation_Request__Sequence__fini(anro4_interface__srv__Interpolation_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      anro4_interface__srv__Interpolation_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

anro4_interface__srv__Interpolation_Request__Sequence *
anro4_interface__srv__Interpolation_Request__Sequence__create(size_t size)
{
  anro4_interface__srv__Interpolation_Request__Sequence * array = (anro4_interface__srv__Interpolation_Request__Sequence *)malloc(sizeof(anro4_interface__srv__Interpolation_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = anro4_interface__srv__Interpolation_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
anro4_interface__srv__Interpolation_Request__Sequence__destroy(anro4_interface__srv__Interpolation_Request__Sequence * array)
{
  if (array) {
    anro4_interface__srv__Interpolation_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `server_feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
anro4_interface__srv__Interpolation_Response__init(anro4_interface__srv__Interpolation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // server_feedback
  if (!rosidl_runtime_c__String__init(&msg->server_feedback)) {
    anro4_interface__srv__Interpolation_Response__fini(msg);
    return false;
  }
  return true;
}

void
anro4_interface__srv__Interpolation_Response__fini(anro4_interface__srv__Interpolation_Response * msg)
{
  if (!msg) {
    return;
  }
  // server_feedback
  rosidl_runtime_c__String__fini(&msg->server_feedback);
}

anro4_interface__srv__Interpolation_Response *
anro4_interface__srv__Interpolation_Response__create()
{
  anro4_interface__srv__Interpolation_Response * msg = (anro4_interface__srv__Interpolation_Response *)malloc(sizeof(anro4_interface__srv__Interpolation_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(anro4_interface__srv__Interpolation_Response));
  bool success = anro4_interface__srv__Interpolation_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
anro4_interface__srv__Interpolation_Response__destroy(anro4_interface__srv__Interpolation_Response * msg)
{
  if (msg) {
    anro4_interface__srv__Interpolation_Response__fini(msg);
  }
  free(msg);
}


bool
anro4_interface__srv__Interpolation_Response__Sequence__init(anro4_interface__srv__Interpolation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  anro4_interface__srv__Interpolation_Response * data = NULL;
  if (size) {
    data = (anro4_interface__srv__Interpolation_Response *)calloc(size, sizeof(anro4_interface__srv__Interpolation_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = anro4_interface__srv__Interpolation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        anro4_interface__srv__Interpolation_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
anro4_interface__srv__Interpolation_Response__Sequence__fini(anro4_interface__srv__Interpolation_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      anro4_interface__srv__Interpolation_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

anro4_interface__srv__Interpolation_Response__Sequence *
anro4_interface__srv__Interpolation_Response__Sequence__create(size_t size)
{
  anro4_interface__srv__Interpolation_Response__Sequence * array = (anro4_interface__srv__Interpolation_Response__Sequence *)malloc(sizeof(anro4_interface__srv__Interpolation_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = anro4_interface__srv__Interpolation_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
anro4_interface__srv__Interpolation_Response__Sequence__destroy(anro4_interface__srv__Interpolation_Response__Sequence * array)
{
  if (array) {
    anro4_interface__srv__Interpolation_Response__Sequence__fini(array);
  }
  free(array);
}
