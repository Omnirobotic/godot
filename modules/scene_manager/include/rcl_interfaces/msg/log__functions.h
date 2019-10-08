// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__MSG__LOG__FUNCTIONS_H_
#define RCL_INTERFACES__MSG__LOG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rcl_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rcl_interfaces/msg/log__struct.h"

/// Initialize rcl_interfaces/Log message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(rcl_interfaces__msg__Log)) before
 * or use rcl_interfaces__msg__Log__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__msg__Log__init(rcl_interfaces__msg__Log * msg);

/// Finalize rcl_interfaces/Log message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__Log__fini(rcl_interfaces__msg__Log * msg);

/// Create rcl_interfaces/Log message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls rcl_interfaces__msg__Log__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__msg__Log *
rcl_interfaces__msg__Log__create();

/// Destroy rcl_interfaces/Log message.
/**
 * It calls rcl_interfaces__msg__Log__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__Log__destroy(rcl_interfaces__msg__Log * msg);


/// Initialize array of rcl_interfaces/Log messages.
/**
 * It allocates the memory for the number of elements and
 * calls rcl_interfaces__msg__Log__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__msg__Log__Sequence__init(rcl_interfaces__msg__Log__Sequence * array, size_t size);

/// Finalize array of rcl_interfaces/Log messages.
/**
 * It calls rcl_interfaces__msg__Log__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__Log__Sequence__fini(rcl_interfaces__msg__Log__Sequence * array);

/// Create array of rcl_interfaces/Log messages.
/**
 * It allocates the memory for the array and
 * calls rcl_interfaces__msg__Log__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__msg__Log__Sequence *
rcl_interfaces__msg__Log__Sequence__create(size_t size);

/// Destroy array of rcl_interfaces/Log messages.
/**
 * It calls rcl_interfaces__msg__Log__Sequence__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__msg__Log__Sequence__destroy(rcl_interfaces__msg__Log__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__MSG__LOG__FUNCTIONS_H_
