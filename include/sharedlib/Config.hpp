#ifndef LIB_CONFIG_HPP
#define LIB_CONFIG_HPP

#include <sharedlib/Defines.hpp>

#if defined(LIB_WIN32)
		#define LIB_API_EXPORT __declspec(dllexport)
		#define LIB_API_IMPORT __declspec(dllimport)
#else
	 #if __GNUC__ >= 4
        #define LIB_API_EXPORT __attribute__((__visibility__("default")))
        #define LIB_API_IMPORT __attribute__((__visibility__("default")))
	 #else
        #define LIB_API_EXPORT
        #define LIB_API_IMPORT
	 #endif
#endif

#if defined(LIB_EXPORTS)
	#define LIB_MATH_API LIB_API_EXPORT
#else
	#define LIB_MATH_API LIB_API_IMPORT
#endif

#endif // LIB_CONFIG_HPP
