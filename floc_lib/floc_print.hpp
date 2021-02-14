#ifndef FLOC_PRINT_H
#define FLOC_PRINT_H

#include <stdio.h>

#include "floc_lib.hpp"

#include "_floc_lib_print_macros.hpp"


#define println(...) print(__VA_ARGS__, '\n')
#define emptyln() print('\n')


#define define_format_function(T, function_block) \
	void display_format(T self, FILE *stream) function_block


define_format_function(const char, { fprintf(stream, "%c", self); })

define_format_function(const char *, { fprintf(stream, "%s", self); })

define_format_function(bool, { fprintf(stream, "%s", self ? "true" : "false"); })

define_format_function(usize, { fprintf(stream, "%lu", self); })

define_format_function(u32, { fprintf(stream, "%u", self); })

define_format_function(u16, { fprintf(stream, "%u", self); })

define_format_function(u8, { fprintf(stream, "%u", self); })

define_format_function(i64, { fprintf(stream, "%li", self); })

define_format_function(i32, { fprintf(stream, "%i", self); })

define_format_function(i16, { fprintf(stream, "%i", self); })

define_format_function(i8, { fprintf(stream, "%i", self); })

define_format_function(f64, { fprintf(stream, "%f", self); })

define_format_function(f32, { fprintf(stream, "%f", self); })


//NOTE: Avoid missing definition of the above stuff
#include "floc_string.hpp"


#define format(...) \
	__extension__ ({ \
		MutStr current_ptr = NULL; \
		usize current_len = 0; \
		FILE *file = open_memstream(&current_ptr, &current_len); \
		print_to_file(file, __VA_ARGS__); \
		fclose(file); \
		String string = String_with_capacity(0); \
		string.head = (u8 *)current_ptr; \
		string.len = current_len; \
		string.capacity = current_len + 1; \
		string; \
	})


#endif /*FLOC_PRINT_H*/
