#pragma once

#ifdef MN_PLATFORM_WINDOWS
	#ifdef MN_BUILD_DLL
		#define MINOR_API __declspec(dllexport)
	#else
		#define MINOR_API __declspec(dllimport)
	#endif
#else
	#error Minor only supports Windows platform.
#endif

#ifdef MIN_ENABLE_ASSERTS
	#define MIN_ASSERT(x, ...) { if(!(x)) { MIN_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
	#define MIN_CORE_ASSERT(x, ...) { if(!(x)) { MIN_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
#else
	#define MIN_ASSERT(x, ...)
	#define MIN_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)