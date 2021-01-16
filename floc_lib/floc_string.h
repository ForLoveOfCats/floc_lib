#include <string.h>

#include "floc_prelude.h"


typedef struct {
	char *content;
	usize len;
} String;


String make_String_lit(char *lit) {
	usize len = strlen(lit);

	char *content = floc_malloc(sizeof(char) * len);
	strncpy(content, lit, len);

	String string = {content, len};
	return string;
}


void destroy_String(String *string) {
	floc_free(string->content);
}
