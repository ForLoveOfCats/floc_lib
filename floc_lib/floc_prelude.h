#ifndef FLOC_PRELUDE_H
#define FLOC_PRELUDE_H

#include <stdint.h>


#ifndef floc_malloc
#include <stdlib.h>
#define floc_malloc malloc
#endif /*floc_malloc*/


#ifndef floc_realloc
#include <stdlib.h>
#define floc_realloc realloc
#endif /*floc_realloc*/


#ifndef floc_free
#include <stdlib.h>
#define floc_free free
#endif /*floc_free*/


#define usize size_t


#define scope(func) __attribute__ ((__cleanup__(func)))


#endif /*FLOC_PRELUDE_H*/
