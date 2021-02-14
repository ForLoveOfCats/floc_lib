#ifndef FLOC_LIB_H
#define FLOC_LIB_H

#include <stdint.h>
#include <stdlib.h>


typedef size_t usize;

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef int64_t i64;
typedef int32_t i32;
typedef int16_t i16;
typedef int8_t i8;

typedef double f64;
typedef float f32;


void DoNot_destroy(...) {}

#define scope(func) __attribute__((__cleanup__(func)))


#define panic(...) \
	{ \
		println("Panic!: " __VA_ARGS__); \
		exit(EXIT_FAILURE); \
	}


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


define_equal_function(i64, {
	return left == right;
})
define_hash_function(i64, {
	return (usize)self;
})

define_equal_function(i32, {
	return left == right;
})
define_hash_function(i32, {
	return (usize)self;
})

define_equal_function(i16, {
	return left == right;
})
define_hash_function(i16, {
	return (usize)self;
})

define_equal_function(i8, {
	return left == right;
})
define_hash_function(i8, {
	return (usize)self;
})


define_equal_function(f64, {
	return left == right;
})

define_equal_function(f32, {
	return left == right;
})


#endif /*FLOC_LIB_H*/
