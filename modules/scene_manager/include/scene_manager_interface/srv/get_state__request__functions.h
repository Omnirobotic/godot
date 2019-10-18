// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef SCENE_MANAGER_INTERFACE__SRV__GET_STATE__REQUEST__FUNCTIONS_H_
#define SCENE_MANAGER_INTERFACE__SRV__GET_STATE__REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "scene_manager_interface/msg/rosidl_generator_c__visibility_control.h"

#include "scene_manager_interface/srv/get_state__request__struct.h"

/// Initialize scene_manager_interface/GetState_Request message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(scene_manager_interface__srv__GetState_Request)) before
 * or use scene_manager_interface__srv__GetState_Request__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
bool
scene_manager_interface__srv__GetState_Request__init(scene_manager_interface__srv__GetState_Request * msg);

/// Finalize scene_manager_interface/GetState_Request message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
void
scene_manager_interface__srv__GetState_Request__fini(scene_manager_interface__srv__GetState_Request * msg);

/// Create scene_manager_interface/GetState_Request message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls scene_manager_interface__srv__GetState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
scene_manager_interface__srv__GetState_Request *
scene_manager_interface__srv__GetState_Request__create();

/// Destroy scene_manager_interface/GetState_Request message.
/**
 * It calls scene_manager_interface__srv__GetState_Request__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
void
scene_manager_interface__srv__GetState_Request__destroy(scene_manager_interface__srv__GetState_Request * msg);


/// Initialize array of scene_manager_interface/GetState_Request messages.
/**
 * It allocates the memory for the number of elements and
 * calls scene_manager_interface__srv__GetState_Request__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
bool
scene_manager_interface__srv__GetState_Request__Sequence__init(scene_manager_interface__srv__GetState_Request__Sequence * array, size_t size);

/// Finalize array of scene_manager_interface/GetState_Request messages.
/**
 * It calls scene_manager_interface__srv__GetState_Request__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
void
scene_manager_interface__srv__GetState_Request__Sequence__fini(scene_manager_interface__srv__GetState_Request__Sequence * array);

/// Create array of scene_manager_interface/GetState_Request messages.
/**
 * It allocates the memory for the array and
 * calls scene_manager_interface__srv__GetState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
scene_manager_interface__srv__GetState_Request__Sequence *
scene_manager_interface__srv__GetState_Request__Sequence__create(size_t size);

/// Destroy array of scene_manager_interface/GetState_Request messages.
/**
 * It calls scene_manager_interface__srv__GetState_Request__Sequence__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_scene_manager_interface
void
scene_manager_interface__srv__GetState_Request__Sequence__destroy(scene_manager_interface__srv__GetState_Request__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // SCENE_MANAGER_INTERFACE__SRV__GET_STATE__REQUEST__FUNCTIONS_H_