#include <stdio.h>

#include "../floc_lib/floc_lib.h"


define_list_type(int);


int main() {
	String string scope(String_destroy) = String_lit("Hello");
	printf("String '%.*s' has len: %lu\n", (int)string.len, string.head,
		   string.len);
	printf("Pushing single character '!'\n");
	push(string, ' ');
	printf("String '%.*s' has len: %lu\n", (int)string.len, string.head,
		   string.len);
	printf("Pushing literal 'world!'\n");
	String_push_lit(&string, "world!");
	printf("String '%.*s' has len: %lu\n", (int)string.len, string.head,
		   string.len);

	printf("\n");

	List_int list scope(List_int_destroy) = List_int_new();
	push(list, 420);
	push(list, 69);
	push(list, 42);
	push(list, 57);
	push(list, 98);
	printf("List has len %lu, capacity: %lu, [3]: %i\n", list.len,
		   list.capacity, list.head[3]);


	printf("\nReturning\n");
	return 0;
}
