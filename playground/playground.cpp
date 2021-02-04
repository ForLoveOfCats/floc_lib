#include "../floc_lib/floc_lib.hpp"


define_list_type(String);
define_map_type(String, String_destroy, String, String_destroy);


int main() {
	Map_String_String map scope(Map_String_String_destroy) = Map_String_String_new();

	String my_key = String_from_lit("A");
	String my_value = String_from_lit("first");
	insert(map, my_key, my_value);

	my_key = String_from_lit("B");
	my_value = String_from_lit("second");
	insert(map, my_key, my_value);

	my_key = String_from_lit("C");
	my_value = String_from_lit("third");
	insert(map, my_key, my_value);

	String *found = lookup(map, "B");
	println("found '", found, "'");

	return 0;
}
