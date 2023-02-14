#include "main.h"

int main(void)
{
	size_t size;
	ssize_t size_read;
	char *expression;

	size = 0;

	while (true)
	{
		printf("$ ");

		size_read = getline(&expression, &size, stdin);

		if (size_read != -1)
			interpret(expression);
	}

	return (0);
}