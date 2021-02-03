#include "../floc_lib/floc_lib.hpp"


define_list_type(int);


int main() {
	String string scope(String_destroy) = String_from_lit("Hello");
	println("String '", &string, "' has len: ", string.len);

	println("Pushing single character ' '");
	push(string, ' ');
	println("String '", &string, "' has len: ", string.len);

	println("Pushing literal 'world!'");
	String_push_lit(&string, "world!");
	println("String '", &string, "' has len: ", string.len);

	emptyln();

	usize customer_id = 42;
	String formatted scope(String_destroy) =
		format("Hello there customer ", customer_id, "! How are you?");
	println(&formatted);

	emptyln();

	List_int list scope(List_int_destroy) = List_int_new();
	push(list, 420);
	push(list, 69);
	push(list, 42);
	push(list, 57);
	push(list, 98);
	println("List has len ", list.len, ", capacity is ", list.capacity,
			", value at index 3 is ", list.head[3]);

	printf("\nReturning\n");
	return 0;
}
