#pragma once

#ifdef AOS_CORE_IPC_EXPORTS
#define AOS_CORE_IPC_API __declspec(dllexport)
#else
#define AOS_CORE_IPC_API __declspec(dllimport)
#endif