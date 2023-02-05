#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "tokens.h"

int main(void)
{
	char *y;

	y = malloc(sizeof(char) * 10);

	if (y == NULL)
		exit(98);
	
	while (true)
	{
		printf("mantiki > ");
		scanf("%s", y);

		print_tokens(y);
	}

	return (0);
}
