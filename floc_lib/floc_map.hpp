#ifndef FLOC_MAP_H
#define FLOC_MAP_H

#include "floc_lib.hpp"

#include "floc_list.hpp"


#define DEFAULT_MAP_CAPACITY 32


#define define_hash_function(K, function_block) \
	usize hash(const K& self) function_block


#define define_map_type(K, K_destroy, V, V_destroy) \
	_define_map_type_internal(K, K_destroy, V, V_destroy, Map_##K##_##V)

#define _define_map_type_internal(K, K_destroy, V, V_destroy, MapName) \
	typedef struct { \
		K key; \
		V value; \
	} MapName##_element; \
\
\
	define_list_type(MapName##_element); \
\
\
	typedef struct { \
		List_##MapName##_element elements; \
	} MapName##_bucket; \
\
\
	define_list_type(MapName##_bucket); \
\
\
	typedef struct { \
		List_##MapName##_bucket buckets; \
		usize element_count; \
	} MapName; \
\
\
	MapName MapName##_new() { \
		MapName self; \
		self.buckets = List_##MapName##_bucket_with_capacity(DEFAULT_MAP_CAPACITY); \
		self.element_count = 0; \
\
		for(usize index = 0; index < DEFAULT_MAP_CAPACITY; index += 1) { \
			MapName##_bucket bucket; \
			bucket.elements = List_##MapName##_element_new(); \
			push(self.buckets, bucket); \
		} \
\
		return self; \
	} \
\
\
	MapName##_element _map_element_new(MapName *overload_filter, K key, V value) { \
		DoNot_destroy(overload_filter); /*Mark as used*/ \
		MapName##_element element; \
		element.key = key; \
		element.value = value; \
		return element; \
	} \
\
\
	void _map_destroy_key(MapName *overload_filter, K *key) { \
		DoNot_destroy(overload_filter); /*Mark as used*/ \
		K_destroy(key); \
	} \
\
\
	void _map_destroy_value(MapName *overload_filter, V *value) { \
		DoNot_destroy(overload_filter); /*Mark as used*/ \
		V_destroy(value); \
	} \
\
\
	void _map_grow(MapName *self) { \
		println("growing from bucket len ", self->buckets.len, " to bucket len ", self->buckets.len * 2); \
		MapName new_self; \
		new_self.buckets = List_##MapName##_bucket_with_capacity(self->buckets.len * 2); \
		new_self.element_count = self->element_count; \
\
		for(usize index = 0; index < new_self.buckets.capacity; index += 1) { \
			MapName##_bucket bucket; \
			bucket.elements = List_##MapName##_element_new(); \
			push(new_self.buckets, bucket); \
		} \
\
		foreach(bucket, self->buckets, { \
			foreach(element, bucket->elements, { \
				insert(new_self, element->key, element->value); \
			})\
			List_##MapName##_element_destroy(&bucket->elements); \
		})\
		List_##MapName##_bucket_destroy(&self->buckets); \
\
		*self = new_self; \
	} \
\
\
	void MapName##_destroy(MapName *self) { \
		foreach(bucket, self->buckets, { \
			foreach(element, bucket->elements, { \
				K_destroy(&element->key); \
				V_destroy(&element->value); \
			}) \
			List_##MapName##_element_destroy(&bucket->elements); \
		}) \
		List_##MapName##_bucket_destroy(&self->buckets); \
	}


//NOTE: Will overwrite existing value on key match
#define insert(self, __key, __value) \
	{ \
		if(self.element_count >= self.buckets.len) { \
			_map_grow(&self); \
		} \
\
		usize __index = hash(__key) % self.buckets.len; \
		auto __bucket = &self.buckets.head[__index]; \
\
		bool __overwrote = false; \
		foreach(__element, __bucket->elements, { \
			if(equal(__element->key, __key)) { \
				_map_destroy_value(&self, &__element->value); \
				auto __lvalue__key = __key; /*I hate this*/ \
				_map_destroy_key(&self, &__lvalue__key); \
				__element->value = __value; \
				__overwrote = true; \
				println("Overwrote existing element"); \
				break; \
			} \
		}) \
\
		if(!__overwrote) { \
			auto __element = _map_element_new(&self, __key, __value); \
			push(__bucket->elements, __element); \
			self.element_count += 1; \
			println("Pushed new element"); \
		} \
	}


#define lookup(self, __key) \
	({ \
		usize __index = hash(__key) % self.buckets.len; \
		auto __bucket = &self.buckets.head[__index]; \
\
		typeof(__bucket->elements.head->value) *__found_value = NULL; \
		foreach(__element, __bucket->elements, { \
			if(equal(__element->key, __key)) { \
				__found_value = &__element->value; \
				break; \
			} \
		}) \
\
		__found_value; \
	})


#endif /*FLOC_MAP_H*/
