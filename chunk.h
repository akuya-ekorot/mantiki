#ifndef mantiki_chunk_h
#define mantiki_chunk_h

#include "common.h"

/**
 * @brief Operation codes. The instructions we're dealing with
 */
typedef enum OpCode
{
	OP_TRUE,
	OP_NOT,
	OP_POP,
	OP_PRINT,
	OP_RETURN,
} OpCode;

/**
 * @brief Store of instructions.
 */
typedef struct Chunk
{
	int count;
	int capacity;
	uint8_t *code;
} Chunk;

void init_chunk(Chunk *chunk);
void write_chunk(Chunk *chunk, uint8_t byte);
void free_chunk(Chunk *chunk);

#endif /* mantiki_chunk_h */