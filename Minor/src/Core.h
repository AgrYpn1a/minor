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