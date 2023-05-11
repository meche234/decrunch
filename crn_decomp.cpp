#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#ifdef __APPLE__
    #include <malloc/malloc.h>
    #define malloc_usable_size malloc_size
#else
    #ifdef __FreeBSD__
        #include <stdlib.h>
    #else
        #include <malloc.h>
    #endif
    #ifdef _WIN32
        #define malloc_usable_size _msize
    #endif
#endif

#include "crn_decomp.h"
