#ifndef FLOC_LIST_H
#define FLOC_LIST_H


#define _define_list_type_internal(T, ListName) \
	typedef struct { \
		T *head; \
		usize len; \
		usize capacity; \
	} ListName; \
	\
	\
	ListName make_ ## ListName () { \
		ListName instance; \
		instance.head = NULL; \
		instance.len = 0; \
		instance.capacity = 0; \
		return instance; \
	} \
	\
	\
	void destroy_ ## ListName (ListName *self) { \
		free(self->head); \
		printf("Freed list\n");\
	}

#define define_list_type(T) _define_list_type_internal(T, List_ ## T)


#define push(self, value) { \
		if(self.capacity == self.len) { \
			if(self.capacity == 0) { \
				self.head = malloc(sizeof(value) * 2); \
				self.capacity = 2; \
			} else { \
				usize new_capacity = self.capacity * 2; \
				self.head = realloc(self.head, sizeof(value) * new_capacity); \
				self.capacity = new_capacity; \
			}\
		} \
		\
		self.head[self.len] = value; \
		self.len += 1; \
	}


#endif /*FLOC_LIST_H*/
