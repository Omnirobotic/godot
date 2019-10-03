// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__FUNCTIONS_H_
#define TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tf2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tf2_msgs/srv/frame_graph__response__struct.h"

/// Initialize tf2_msgs/FrameGraph_Response message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(tf2_msgs__srv__FrameGraph_Response)) before
 * or use tf2_msgs__srv__FrameGraph_Response__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__srv__FrameGraph_Response__init(tf2_msgs__srv__FrameGraph_Response * msg);

/// Finalize tf2_msgs/FrameGraph_Response message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__srv__FrameGraph_Response__fini(tf2_msgs__srv__FrameGraph_Response * msg);

/// Create tf2_msgs/FrameGraph_Response message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls tf2_msgs__srv__FrameGraph_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__srv__FrameGraph_Response *
tf2_msgs__srv__FrameGraph_Response__create();

/// Destroy tf2_msgs/FrameGraph_Response message.
/**
 * It calls tf2_msgs__srv__FrameGraph_Response__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__srv__FrameGraph_Response__destroy(tf2_msgs__srv__FrameGraph_Response * msg);


/// Initialize array of tf2_msgs/FrameGraph_Response messages.
/**
 * It allocates the memory for the number of elements and
 * calls tf2_msgs__srv__FrameGraph_Response__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__srv__FrameGraph_Response__Sequence__init(tf2_msgs__srv__FrameGraph_Response__Sequence * array, size_t size);

/// Finalize array of tf2_msgs/FrameGraph_Response messages.
/**
 * It calls tf2_msgs__srv__FrameGraph_Response__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__srv__FrameGraph_Response__Sequence__fini(tf2_msgs__srv__FrameGraph_Response__Sequence * array);

/// Create array of tf2_msgs/FrameGraph_Response messages.
/**
 * It allocates the memory for the array and
 * calls tf2_msgs__srv__FrameGraph_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__srv__FrameGraph_Response__Sequence *
tf2_msgs__srv__FrameGraph_Response__Sequence__create(size_t size);

/// Destroy array of tf2_msgs/FrameGraph_Response messages.
/**
 * It calls tf2_msgs__srv__FrameGraph_Response__Sequence__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__srv__FrameGraph_Response__Sequence__destroy(tf2_msgs__srv__FrameGraph_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__SRV__FRAME_GRAPH__RESPONSE__FUNCTIONS_H_
