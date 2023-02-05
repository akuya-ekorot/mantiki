#include "tokens.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_tokens(char *input)
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
		if (*input == ' ')
			continue;

		for (j = 0; tokens[j].type; j++)
		{
			if (input[i] == *tokens[j].type)
				printf("Token: %d\n", tokens[j].value);
		}
	}
}
