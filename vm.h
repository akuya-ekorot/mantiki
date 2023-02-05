#ifndef mantiki_vm_h
#define mantiki_vm_h

#include "tokens.h"

typedef struct Stack
{
	TOKENS token;
	struct Stack *next;
} Stack;

void vm(void);
Stack *init_stack(Stack **stack);
void store_tokens(Stack *stack, char *input);

#endif /* mantiki_vm_h */
