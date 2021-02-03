#ifndef FLOC_PRELUDE_H
#define FLOC_PRELUDE_H


#include <stdint.h>
#include <stdlib.h>


#define usize size_t
#define u8 uint8_t


#define f32 float
#define f64 double


#define scope(func) __attribute__((__cleanup__(func)))


#endif /*FLOC_PRELUDE_H*/
