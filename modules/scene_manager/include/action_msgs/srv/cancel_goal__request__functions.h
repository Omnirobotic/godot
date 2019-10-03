// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__FUNCTIONS_H_
#define ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "action_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "action_msgs/srv/cancel_goal__request__struct.h"

/// Initialize action_msgs/CancelGoal_Request message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(action_msgs__srv__CancelGoal_Request)) before
 * or use action_msgs__srv__CancelGoal_Request__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
bool
action_msgs__srv__CancelGoal_Request__init(action_msgs__srv__CancelGoal_Request * msg);

/// Finalize action_msgs/CancelGoal_Request message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
void
action_msgs__srv__CancelGoal_Request__fini(action_msgs__srv__CancelGoal_Request * msg);

/// Create action_msgs/CancelGoal_Request message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls action_msgs__srv__CancelGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
action_msgs__srv__CancelGoal_Request *
action_msgs__srv__CancelGoal_Request__create();

/// Destroy action_msgs/CancelGoal_Request message.
/**
 * It calls action_msgs__srv__CancelGoal_Request__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
void
action_msgs__srv__CancelGoal_Request__destroy(action_msgs__srv__CancelGoal_Request * msg);


/// Initialize array of action_msgs/CancelGoal_Request messages.
/**
 * It allocates the memory for the number of elements and
 * calls action_msgs__srv__CancelGoal_Request__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
bool
action_msgs__srv__CancelGoal_Request__Sequence__init(action_msgs__srv__CancelGoal_Request__Sequence * array, size_t size);

/// Finalize array of action_msgs/CancelGoal_Request messages.
/**
 * It calls action_msgs__srv__CancelGoal_Request__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
void
action_msgs__srv__CancelGoal_Request__Sequence__fini(action_msgs__srv__CancelGoal_Request__Sequence * array);

/// Create array of action_msgs/CancelGoal_Request messages.
/**
 * It allocates the memory for the array and
 * calls action_msgs__srv__CancelGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
action_msgs__srv__CancelGoal_Request__Sequence *
action_msgs__srv__CancelGoal_Request__Sequence__create(size_t size);

/// Destroy array of action_msgs/CancelGoal_Request messages.
/**
 * It calls action_msgs__srv__CancelGoal_Request__Sequence__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_action_msgs
void
action_msgs__srv__CancelGoal_Request__Sequence__destroy(action_msgs__srv__CancelGoal_Request__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__SRV__CANCEL_GOAL__REQUEST__FUNCTIONS_H_
