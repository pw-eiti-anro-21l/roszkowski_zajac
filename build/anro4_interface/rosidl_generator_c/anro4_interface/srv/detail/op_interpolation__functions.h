// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from anro4_interface:srv/OpInterpolation.idl
// generated code does not contain a copyright notice

#ifndef ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__FUNCTIONS_H_
#define ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "anro4_interface/msg/rosidl_generator_c__visibility_control.h"

#include "anro4_interface/srv/detail/op_interpolation__struct.h"

/// Initialize srv/OpInterpolation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anro4_interface__srv__OpInterpolation_Request
 * )) before or use
 * anro4_interface__srv__OpInterpolation_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
bool
anro4_interface__srv__OpInterpolation_Request__init(anro4_interface__srv__OpInterpolation_Request * msg);

/// Finalize srv/OpInterpolation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Request__fini(anro4_interface__srv__OpInterpolation_Request * msg);

/// Create srv/OpInterpolation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anro4_interface__srv__OpInterpolation_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
anro4_interface__srv__OpInterpolation_Request *
anro4_interface__srv__OpInterpolation_Request__create();

/// Destroy srv/OpInterpolation message.
/**
 * It calls
 * anro4_interface__srv__OpInterpolation_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Request__destroy(anro4_interface__srv__OpInterpolation_Request * msg);


/// Initialize array of srv/OpInterpolation messages.
/**
 * It allocates the memory for the number of elements and calls
 * anro4_interface__srv__OpInterpolation_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
bool
anro4_interface__srv__OpInterpolation_Request__Sequence__init(anro4_interface__srv__OpInterpolation_Request__Sequence * array, size_t size);

/// Finalize array of srv/OpInterpolation messages.
/**
 * It calls
 * anro4_interface__srv__OpInterpolation_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Request__Sequence__fini(anro4_interface__srv__OpInterpolation_Request__Sequence * array);

/// Create array of srv/OpInterpolation messages.
/**
 * It allocates the memory for the array and calls
 * anro4_interface__srv__OpInterpolation_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
anro4_interface__srv__OpInterpolation_Request__Sequence *
anro4_interface__srv__OpInterpolation_Request__Sequence__create(size_t size);

/// Destroy array of srv/OpInterpolation messages.
/**
 * It calls
 * anro4_interface__srv__OpInterpolation_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Request__Sequence__destroy(anro4_interface__srv__OpInterpolation_Request__Sequence * array);

/// Initialize srv/OpInterpolation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * anro4_interface__srv__OpInterpolation_Response
 * )) before or use
 * anro4_interface__srv__OpInterpolation_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
bool
anro4_interface__srv__OpInterpolation_Response__init(anro4_interface__srv__OpInterpolation_Response * msg);

/// Finalize srv/OpInterpolation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Response__fini(anro4_interface__srv__OpInterpolation_Response * msg);

/// Create srv/OpInterpolation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * anro4_interface__srv__OpInterpolation_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
anro4_interface__srv__OpInterpolation_Response *
anro4_interface__srv__OpInterpolation_Response__create();

/// Destroy srv/OpInterpolation message.
/**
 * It calls
 * anro4_interface__srv__OpInterpolation_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Response__destroy(anro4_interface__srv__OpInterpolation_Response * msg);


/// Initialize array of srv/OpInterpolation messages.
/**
 * It allocates the memory for the number of elements and calls
 * anro4_interface__srv__OpInterpolation_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
bool
anro4_interface__srv__OpInterpolation_Response__Sequence__init(anro4_interface__srv__OpInterpolation_Response__Sequence * array, size_t size);

/// Finalize array of srv/OpInterpolation messages.
/**
 * It calls
 * anro4_interface__srv__OpInterpolation_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Response__Sequence__fini(anro4_interface__srv__OpInterpolation_Response__Sequence * array);

/// Create array of srv/OpInterpolation messages.
/**
 * It allocates the memory for the array and calls
 * anro4_interface__srv__OpInterpolation_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
anro4_interface__srv__OpInterpolation_Response__Sequence *
anro4_interface__srv__OpInterpolation_Response__Sequence__create(size_t size);

/// Destroy array of srv/OpInterpolation messages.
/**
 * It calls
 * anro4_interface__srv__OpInterpolation_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_anro4_interface
void
anro4_interface__srv__OpInterpolation_Response__Sequence__destroy(anro4_interface__srv__OpInterpolation_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ANRO4_INTERFACE__SRV__DETAIL__OP_INTERPOLATION__FUNCTIONS_H_
