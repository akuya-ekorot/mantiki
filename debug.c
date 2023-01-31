#include <stdio.h>

#include "debug.h"

/**
 * @brief Disassembles the instructions in the entire chunk.
 * @param chunk chunk of instructions to disassemble.
 * @param name name of the disassembly process.
 */
void disassemble_chunk(Chunk *chunk, const char *name)
{
	int offset;

	printf("========== %s ==========\n", name);

	for (offset = 0; offset < chunk->count;)
		offset = disassemble_instruction(chunk, offset);
}

static int simple_instruction(const char *name, int offset)
{
	printf("%s\n", name);
	return (offset + 1);
}

int disassemble_instruction(Chunk *chunk, int offset)
{
	uint8_t instruction;

	printf("%04d ", offset);

	instruction = chunk->code[offset];

	switch (instruction)
	{
	case OP_RETURN:
		return (simple_instruction("OP_RETURN", offset));

	default:
		printf("Unkown OP-CODE %d\n", instruction);
		return (offset + 1);
	}
}
