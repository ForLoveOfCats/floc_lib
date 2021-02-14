#include "../floc_lib/floc_lib.hpp"


define_list_type(String);
define_map_type(String, String_destroy, String, String_destroy);


define_list_type(u32);
define_map_type(u32, DoNot_destroy, f64, DoNot_destroy);


define_map_type(i64, DoNot_destroy, f64, DoNot_destroy);


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

	emptyln();

	Map_u32_f64 second_map scope(Map_u32_f64_destroy) = Map_u32_f64_new();
	insert(second_map, (u32)5, (f64)4.2);
	insert(second_map, (u32)42, (f64)6.9);
	insert(second_map, (u32)420, (f64)8);
	insert(second_map, (u32)180, (f64)19);
	insert(second_map, (u32)0, (f64)7.65);
	println(*lookup(second_map, (u32)180));


	Map_i64_f64 third_map scope(Map_i64_f64_destroy) = Map_i64_f64_new();
	insert(third_map, (i64)5, (f64)4.2);
	insert(third_map, (i64)-4, (f64)8);
	insert(third_map, (i64)0, (f64)10);
	println(*lookup(third_map, (i64)-4));


	return 0;
}
