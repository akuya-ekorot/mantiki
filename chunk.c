#include <stdlib.h>

#include "chunk.h"
#include "memory.h"

/**
 * initChunk - Constructor-like function to initialize a chunk
 * @chunk: Chunk to initialize.
 *
 * Return: Nothing.
 */
void initChunk(Chunk *chunk)
{
	chunk->count = 0;
	chunk->capacity = 0;
	chunk->code = NULL;
}

void writeChunk(Chunk *chunk, uint8_t byte)
{
	int oldCapacity;

	if (chunk->capacity < chunk->count + 1)
	{
		oldCapacity = chunk->capacity;
		chunk->capacity = GROW_CAPACITY(oldCapacity);
		chunk->code = GROW_ARRAY(uint8_t, chunk->code, oldCapacity, chunk->capacity);
	}

	chunk->code[chunk->count++] = byte;
}