#ifndef mantiki_memory_h
#define mantiki_memory_h

#include "common.h"

#define GROW_CAPACITY(capacity) ((capacity) < 8 ? 8 : (capacity)*2)
#define GROW_ARRAY(type, pointer, old_count, new_count) \
	(type *)reallocate(pointer, sizeof(type) * (old_count), sizeof(type) * (new_count))

#define FREE_ARRAY(type, pointer, old_count) \
	reallocate(pointer, sizeof(type) * (old_count), 0)

void *reallocate(void *, size_t, size_t);

#endif /* mantiki_memory_h */