#ifndef LIB_DEFINES_HPP
#define LIB_DEFINES_HPP

#if defined(__APPLE__)
	#ifndef LIB_MACOS
		#define LIB_MACOS
	#endif
#elif defined(__linux__)
	#ifndef LIB_LINUX
		#define LIB_LINUX
	#endif
#elif defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
	#ifndef LIB_WIN32
		#define LIB_WIN32
	#endif
#elif defined(__EMSCRIPTEN__)
	#ifndef LIB_EMSCRIPTEN
		#define LIB_EMSCRIPTEN
	#endif
#else
static_assert(false, "Unknown platform");
#endif

#endif // LIB_DEFINES_HPP
