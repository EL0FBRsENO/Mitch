#pragma once

#ifdef MT_PLATFORM_WINDOWS
	#ifdef MT_BUILD_DLL
		#define MITCH_API __declspec(dllexport)
	#else 
		#define MITCH_API __declspec(dllimport)
	#endif
#else
	#error Mitch only supports Windows!
#endif
