#ifndef FLOC_PRINT_H
#define FLOC_PRINT_H

#include <stdio.h>

#include "floc_prelude.hpp"

#include "_floc_lib_print_macros.hpp"


#define println(...) print(__VA_ARGS__, '\n')
#define emptyln() print('\n')


#define define_format_function(T, function_block) \
	void display_format(T self, FILE *stream) function_block


define_format_function(const char, { fprintf(stream, "%c", self); });

define_format_function(const char *, { fprintf(stream, "%s", self); });

define_format_function(bool, { fprintf(stream, "%s", self ? "true" : "false"); });

define_format_function(usize, { fprintf(stream, "%lu", self); });

define_format_function(u8, { fprintf(stream, "%u", self); });

define_format_function(int, { fprintf(stream, "%i", self); });


//NOTE: Avoid missing definition of the above stuff
#include "floc_string.hpp"


#define format(...) \
	({ \
		Str current_ptr = NULL; \
		usize current_len = 0; \
		FILE *file = open_memstream(&current_ptr, &current_len); \
		print_to_file(file, __VA_ARGS__); \
		fclose(file); \
		String string = String_with_capacity(0); \
		string.head = (u8 *)current_ptr; \
		string.len = 42; \
		string.capacity = current_len + 1; \
		string; \
	})


#endif /*FLOC_PRINT_H*/