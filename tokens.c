#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tokens.h"
#include "vm.h"

Stack *add_node(TOKENS token, Stack *stack)
{
	Stack *new;

	new = init_stack(&new);

	new->token = token;
	new->next = stack;
	stack = new;

	return (stack);
}

void print_stack(Stack *stack)
{
	Stack *tmp;

	tmp = stack;

	while (tmp)
	{
		printf("%d\n", tmp->token);
		tmp = tmp->next;
	}
}

void store_tokens(Stack *stack, char *input)
{
	int i, j;
	Token tokens[] = {
		{"~", TOKEN_NOT},
		{"T", TOKEN_TRUE},
		{"F", TOKEN_FALSE},
		{"&", TOKEN_AND},
		{"|", TOKEN_OR},
		{"(", TOKEN_LPAREN},
		{")", TOKEN_RPAREN},
		{NULL, TOKEN_NULL},
	};


	for (i = 0; input[i]; i++)
	{
		for (j = 0; tokens[j].type; j++)
		{
			if (input[i] == *tokens[j].type)
			{
				stack = add_node(tokens[j].value, stack);
			}
		}
	}
	print_stack(stack);
}
