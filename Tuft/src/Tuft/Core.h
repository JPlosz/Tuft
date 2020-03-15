#pragma once

#ifdef TF_PLATFORM_WINDOWS
	#ifdef TF_BUILD_DLL
		#define TUFT_API __declspec(dllexport)
	#else
		#define TUFT_API __declspec(dllimport)
	#endif
#else
	#error Tuft only supports Windows!
#endif