#define _COUNT_VA_ARGS(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, \
					   _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, \
					   _24, _25, _26, _27, _28, _29, _30, _31, _32, N, ...) \
	N
#define COUNT_VA_ARGS(...) \
	_COUNT_VA_ARGS(_, ##__VA_ARGS__, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, \
				   22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, \
				   7, 6, 5, 4, 3, 2, 1, 0)


#define print(...) \
	_print_to_file(stdout, COUNT_VA_ARGS(__VA_ARGS__), __VA_ARGS__)
#define print_to_file(file, ...) \
	_print_to_file(file, COUNT_VA_ARGS(__VA_ARGS__), __VA_ARGS__)
#define _print_to_file(file, count, ...) \
	__print_to_file(file, count, __VA_ARGS__)
#define __print_to_file(file, count, ...) \
	__print_to_file_##count(file, __VA_ARGS__)


#define __print_0(file)

#define __print_to_file_1(file, _1) \
	{ display_format(_1, file); }

#define __print_to_file_2(file, _1, _2) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
	}

#define __print_to_file_3(file, _1, _2, _3) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
	}

#define __print_to_file_4(file, _1, _2, _3, _4) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
	}

#define __print_to_file_5(file, _1, _2, _3, _4, _5) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
	}

#define __print_to_file_6(file, _1, _2, _3, _4, _5, _6) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
	}

#define __print_to_file_7(file, _1, _2, _3, _4, _5, _6, _7) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
	}

#define __print_to_file_8(file, _1, _2, _3, _4, _5, _6, _7, _8) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
	}

#define __print_to_file_9(file, _1, _2, _3, _4, _5, _6, _7, _8, _9) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
	}

#define __print_to_file_10(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
	}

#define __print_to_file_11(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
	}

#define __print_to_file_12(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
	}

#define __print_to_file_13(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
	}

#define __print_to_file_14(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
	}

#define __print_to_file_15(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
	}

#define __print_to_file_16(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
	}

#define __print_to_file_17(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
	}

#define __print_to_file_18(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
	}

#define __print_to_file_19(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
	}

#define __print_to_file_20(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
	}

#define __print_to_file_21(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
	}

#define __print_to_file_22(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
	}

#define __print_to_file_23(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
	}

#define __print_to_file_24(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
	}

#define __print_to_file_25(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
	}

#define __print_to_file_26(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25, _26) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
		display_format(_26, file); \
	}

#define __print_to_file_27(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25, _26, _27) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
		display_format(_26, file); \
		display_format(_27, file); \
	}

#define __print_to_file_28(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25, _26, _27, _28) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
		display_format(_26, file); \
		display_format(_27, file); \
		display_format(_28, file); \
	}

#define __print_to_file_29(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25, _26, _27, _28, _29) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
		display_format(_26, file); \
		display_format(_27, file); \
		display_format(_28, file); \
		display_format(_29, file); \
	}

#define __print_to_file_30(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25, _26, _27, _28, _29, _30) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
		display_format(_26, file); \
		display_format(_27, file); \
		display_format(_28, file); \
		display_format(_29, file); \
		display_format(_30, file); \
	}

#define __print_to_file_31(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25, _26, _27, _28, _29, _30, _31) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
		display_format(_26, file); \
		display_format(_27, file); \
		display_format(_28, file); \
		display_format(_29, file); \
		display_format(_30, file); \
		display_format(_31, file); \
	}

#define __print_to_file_32(file, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, \
						   _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, \
						   _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, \
						   _32) \
	{ \
		display_format(_1, file); \
		display_format(_2, file); \
		display_format(_3, file); \
		display_format(_4, file); \
		display_format(_5, file); \
		display_format(_6, file); \
		display_format(_7, file); \
		display_format(_8, file); \
		display_format(_9, file); \
		display_format(_10, file); \
		display_format(_11, file); \
		display_format(_12, file); \
		display_format(_13, file); \
		display_format(_14, file); \
		display_format(_15, file); \
		display_format(_16, file); \
		display_format(_17, file); \
		display_format(_18, file); \
		display_format(_19, file); \
		display_format(_20, file); \
		display_format(_21, file); \
		display_format(_22, file); \
		display_format(_23, file); \
		display_format(_24, file); \
		display_format(_25, file); \
		display_format(_26, file); \
		display_format(_27, file); \
		display_format(_28, file); \
		display_format(_29, file); \
		display_format(_30, file); \
		display_format(_31, file); \
		display_format(_32, file); \
	}
