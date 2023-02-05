#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "tokens.h"
#include "vm.h"

Stack *init_stack(Stack **stack)
{
	*stack = malloc(sizeof(Stack));

	(*stack)->next = NULL;
	(*stack)->token = 0;

	return (*stack);
}

void vm()
{
	char *y;
	Stack *stack;

	stack = init_stack(&stack);

	y = malloc(sizeof(char) * 64);

	if (y == NULL)
		exit(98);

	while (true)
	{
		printf("mantiki >> ");
		scanf("%s", y);

		store_tokens(stack, y);
	}
}
