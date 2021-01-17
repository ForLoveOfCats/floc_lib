#include <string.h>

#include "floc_list.h"
#include "floc_prelude.h"


prefixed_define_list_type(for_string_, u8);

typedef for_string_List_u8 String;


String String_lit(char *lit) {
	usize len = strlen(lit);

	String self = for_string_List_u8_with_capacity(len);
	strncpy((char *)self.head, lit, len);
	self.len = len;

	return self;
}


void String_push_lit(String *self, char *lit) {
	usize lit_len = strlen(lit);

	for_string_List_u8_expand_capacity_by(self, lit_len);
	strncpy((char *)&self->head[self->len], lit, lit_len);
	self->len += lit_len;
}


void String_destroy(String *self) {
	for_string_List_u8_destroy(self);
}
