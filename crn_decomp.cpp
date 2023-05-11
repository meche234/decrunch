#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#if defined(__APPLE__)
#define malloc_usable_size malloc_size
#else
#if defined(__FreeBSD__)
#include <stdlib.h>
#else
#include </Library/Developer/CommandLineTools/SDKs/MacOSX13.3.sdk/usr/include/malloc.malloc.h>
#endif
#ifdef _WIN32
#define malloc_usable_size _msize
#endif
#endif

#include "crn_decomp.h"
