#ifndef FLOC_LIST_H
#define FLOC_LIST_H


#define define_list_type(T) _define_list_type_internal(T, List_##T)

#define prefixed_define_list_type(prefix, T) \
	_define_list_type_internal(T, prefix##List_##T)

#define _define_list_type_internal(T, ListName) \
	typedef struct { \
		T *head; \
		usize len; \
		usize capacity; \
	} ListName; \
\
\
	ListName ListName##_new() { \
		ListName instance; \
		instance.head = NULL; \
		instance.len = 0; \
		instance.capacity = 0; \
		return instance; \
	} \
\
\
	ListName ListName##_with_capacity(usize capacity) { \
		ListName instance; \
		if(capacity > 0) { \
			instance.head = (T *)malloc(sizeof(T) * capacity); \
		} else { \
			instance.head = NULL; \
		} \
		instance.len = 0; \
		instance.capacity = capacity; \
		return instance; \
	} \
\
\
	void ListName##_expand_capacity_by(ListName *self, usize increase) { \
		usize new_capacity = self->capacity + increase; \
		self->head = (T *)realloc(self->head, sizeof(T) * new_capacity); \
		self->capacity = new_capacity; \
	} \
\
\
	void ListName##_destroy(ListName *self) { \
		free(self->head); \
	}


#define push(self, value) \
	{ \
		if(self.capacity == self.len) { \
			if(self.capacity == 0) { \
				self.head = (typeof(self.head))malloc(sizeof(value) * 2); \
				self.capacity = 2; \
			} else { \
				usize new_capacity = self.capacity * 2; \
				self.head = (typeof(self.head))realloc( \
					self.head, sizeof(value) * new_capacity); \
				self.capacity = new_capacity; \
			} \
		} \
\
		self.head[self.len] = value; \
		self.len += 1; \
	}


#define foreach(var_name, list, loop_body) \
	for(usize __foreach_loop_index = 0; __foreach_loop_index < list.len; __foreach_loop_index += 1) { \
		auto var_name = &list.head[__foreach_loop_index]; \
		{ loop_body } \
	}


#endif /*FLOC_LIST_H*/
