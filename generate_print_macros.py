max_count = 32


base = "#define _COUNT_VA_ARGS("
for index in range(0, max_count + 1):
	base += f"_{index}, "
base += "N, ...) N"
print(base)


base = "#define COUNT_VA_ARGS(...) _COUNT_VA_ARGS(_, ## __VA_ARGS__, "
for index in range(0, max_count + 1):
	base += str(max_count - index)
	if index != max_count:
		base += ", "
base += ")"
print(base)


print("\n")


base = '''
#define print(...) _print_to_file(stdout, COUNT_VA_ARGS(__VA_ARGS__), __VA_ARGS__)
#define print_to_file(file, ...) _print_to_file(file, COUNT_VA_ARGS(__VA_ARGS__), __VA_ARGS__)
#define _print_to_file(file, count, ...) __print_to_file(file, count, __VA_ARGS__)
#define __print_to_file(file, count, ...) __print_to_file_##count(file, __VA_ARGS__)



#define __print_0(file)
'''
for index in range(1, max_count + 1):
	base += f"\n#define __print_to_file_{index}(file, "
	for arg_index in range(1, index + 1):
		base += f"_{arg_index}"
		if arg_index != index:
			base += ", "
	base += ") { \\\n"

	for body_index in range(1, index + 1):
		base += f"\tdisplay_format(_{body_index}, file); \\\n"

	base += "}\n"
print(base)