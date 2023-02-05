#include "common.h"
#include "vm.h"

VM vm;

void init_vm(void)
{
}

void free_vm(void)
{
}

static Interpret_Result run(void)
{
#define READ_BYTE() (*vm.ip++)

	for (;;)
	{
		uint8_t instruction;

		switch (instruction = READ_BYTE())
		{
		case OP_RETURN:
			return (INTERPRET_OK);
		}
	}

#undef READ_BYTE
}

Interpret_Result interpret(Chunk *chunk)
{
	vm.chunk = chunk;
	vm.ip = vm.chunk->code;

	return (run());
}