#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "vm.h"

int main(int argc, const char **argv)
{
	Chunk chunk;

	init_vm();
	init_chunk(&chunk);

	write_chunk(&chunk, OP_RETURN);
	disassemble_chunk(&chunk, "test chunk");

	interpret(&chunk);
	free_vm();
	free_chunk(&chunk);

	return (0);
}
