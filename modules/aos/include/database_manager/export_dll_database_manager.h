#pragma once

#ifdef EXPORT_DLL_DATABASE_MANAGER_TAG
#define EXPORT_DLL_DATABASE_MANAGER __declspec(dllexport)
#else
#define EXPORT_DLL_DATABASE_MANAGER __declspec(dllimport)
#endif#pragma once
