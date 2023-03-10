#include <stdlib.h>

#include "chunk.h"
#include "memory.h"

/**
 * initChunk - Constructor-like function to initialize a chunk
 * @chunk: Chunk to initialize.
 *
 * Return: Nothing.
 */
void init_chunk(Chunk *chunk)
{
	chunk->count = 0;
	chunk->capacity = 0;
	chunk->code = NULL;
}

void write_chunk(Chunk *chunk, uint8_t byte)
{
	int old_capacity;

	if (chunk->capacity < chunk->count + 1)
	{
		old_capacity = chunk->capacity;
		chunk->capacity = GROW_CAPACITY(old_capacity);
		chunk->code = GROW_ARRAY(uint8_t, chunk->code, old_capacity, chunk->capacity);
	}

	chunk->code[chunk->count++] = byte;
}

void free_chunk(Chunk *chunk)
{
	FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
	init_chunk(chunk);
}