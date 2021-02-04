#ifndef FLOC_STRING_H
#define FLOC_STRING_H

#include <stdio.h>
#include <string.h>

#include "floc_cmp.hpp"
#include "floc_list.hpp"
#include "floc_map.hpp"
#include "floc_prelude.hpp"
#include "floc_print.hpp"


typedef char * MutStr;
typedef const char * Str;


prefixed_define_list_type(for_string_, u8);

typedef for_string_List_u8 String;


String String_empty() {
	String self = for_string_List_u8_with_capacity(0);
	return self;
}


String String_with_capacity(usize capacity) {
	String self = for_string_List_u8_with_capacity(capacity);
	return self;
}


String String_from_lit(Str lit) {
	usize len = strlen(lit);

	String self = for_string_List_u8_with_capacity(len);
	strncpy((MutStr)self.head, lit, len);
	self.len = len;

	return self;
}


void String_push_lit(String *self, Str lit) {
	usize lit_len = strlen(lit);

	for_string_List_u8_expand_capacity_by(self, lit_len);
	strncpy((MutStr)&self->head[self->len], lit, lit_len);
	self->len += lit_len;
}


void String_destroy(String *self) {
	for_string_List_u8_destroy(self);
}


define_format_function(String *, {
	//I hate this cast
	fprintf(stream, "%.*s", (int)self->len, self->head);
});


define_equal_function(String *, {
	if(left->len != right->len) {
		return false;
	}

	for(usize index = 0; index < left->len; index += 1) {
		if(left->head[index] != right->head[index]) {
			return false;
		}
	}

	return true;
});


define_equal_function_diff(String *, Str, {
	usize index = 0;
	while(index < a->len) {
		char a_char = a->head[index];
		char b_char = b[index];

		if(a_char != b_char) {
			return false;
		}

		index += 1;
	}

	if(b[index] != '\0') {
		return false;
	}

	return true;
});


define_hash_function(Str, {
	usize hash = 0;
	for(usize index = 0; self[index] != '\0'; index += 1) {
		hash = (hash * 31) + self[index];
	}
	return hash;
});


define_hash_function(String *, {
	usize hash = 0;
	for(usize index = 0; index < self->len; index += 1) {
		hash = (hash * 31) + self->head[index];
	}
	return hash;
});


#endif /*FLOC_STRING_H*/
