#ifndef FLOC_LIB_H
#define FLOC_LIB_H

#include <stdint.h>
#include <stdlib.h>


#define usize size_t

#define u64 uint64_t
#define u32 uint32_t
#define u16 uint16_t
#define u8 uint8_t


#define f64 double
#define f32 float


void DoNot_destroy(...) {}

#define scope(func) __attribute__((__cleanup__(func)))


#include "floc_list.hpp"
#include "floc_map.hpp"
#include "floc_lib.hpp"
#include "floc_print.hpp"
#include "floc_string.hpp"


define_equal_function(usize, {
	return left == right;
})
define_hash_function(usize, {
	return self;
})

//NOTE: No defintion for `u64` as that collides with `usize`

define_equal_function(u32, {
	return left == right;
})
define_hash_function(u32, {
	return (usize)self;
})

define_equal_function(u16, {
	return left == right;
})
define_hash_function(u16, {
	return (usize)self;
})

define_equal_function(u8, {
	return left == right;
})
define_hash_function(u8, {
	return (usize)self;
})


#endif /*FLOC_LIB_H*/
