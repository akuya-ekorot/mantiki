#include <stdlib.h>

#include "memory.h"

/**
 * reallocate - single function for dynamic memory management
 * @pointer: pointer to the memory
 * @old_size: the old size of the space in memory
 * @new_size: the new size to allocate
 *
 * Return: pointer to the newly allocated space in memory.
 */
void *reallocate(void *pointer, size_t old_size, size_t new_size)
{
	void *result;

	if (new_size == 0)
	{
		free(pointer);
		return (NULL);
	}

	result = realloc(pointer, new_size);
	return (result);
}