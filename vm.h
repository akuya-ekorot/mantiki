#ifndef mantiki_vm_h
#define mantiki_vm_h

#include "chunk.h"

/**
 * @brief Structure for the virtual machine
 */
typedef struct VM
{
	Chunk *chunk;
	uint8_t *ip;
} VM;

typedef enum Interpret_Result
{
	INTERPRET_OK,
	INTERPRET_COMPILE_ERROR,
	INTERPRET_RUNTIME_ERROR,
} Interpret_Result;

void init_vm(void);
void free_vm(void);
Interpret_Result interpret(Chunk *chunk);

#endif /* mantiki_vm_h */