#ifndef FLOC_CMP_H
#define FLOC_CMP_H


#define define_equal_function(T, function_block) \
	bool equal(const T& left, const T& right) function_block

#define define_equal_function_diff(T1, T2, function_block) \
	bool equal(const T1& a, const T2& b) function_block \
	bool equal(const T2& a, const T1& b) { return equal(b, a); }


#endif /*FLOC_CMP_H*/
