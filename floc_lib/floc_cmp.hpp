#ifndef FLOC_CMP_H
#define FLOC_CMP_H


#define define_equal_function(T, function_block) \
	bool equal(T left, T right) function_block

#define define_equal_function_diff(T1, T2, function_block) \
	bool equal(T1 a, T2 b) function_block \
	bool equal(T2 a, T1 b) { return equal(b, a); }


#endif /*FLOC_CMP_H*/
