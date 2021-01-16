#include "../floc_lib/floc_lib.h"

#include <stdio.h>


define_list_type(int)


int main() {
	String string scope(destroy_String) = make_String_lit("Hello there!");
	printf("String has len: %li\n", string.len);

	List_int list scope(destroy_List_int) = make_List_int();
	push(list, 420);
	push(list, 69);
	push(list, 42);
	push(list, 57);
	push(list, 98);
	printf("len %li, capacity: %li, [3]: %i\n", list.len, list.capacity, list.head[3]);

	return 0;
}
