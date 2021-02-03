#ifndef FLOC_STRING_H
#define FLOC_STRING_H

#include <stdio.h>
#include <string.h>

#include "floc_list.hpp"
#include "floc_prelude.hpp"
#include "floc_print.hpp"


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


String String_from_lit(const char *lit) {
	usize len = strlen(lit);

	String self = for_string_List_u8_with_capacity(len);
	strncpy((char *)self.head, lit, len);
	self.len = len;

	return self;
}


void String_push_lit(String *self, const char *lit) {
	usize lit_len = strlen(lit);

	for_string_List_u8_expand_capacity_by(self, lit_len);
	strncpy((char *)&self->head[self->len], lit, lit_len);
	self->len += lit_len;
}


void String_destroy(String *self) {
	for_string_List_u8_destroy(self);
}


define_format_function(String *, {
	//I hate this cast
	fprintf(stream, "%.*s", (int)self->len, self->head);
})


#endif /*FLOC_STRING_H*/
