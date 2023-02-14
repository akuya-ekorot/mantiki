#include "main.h"

int main(void)
{
	size_t size;
	ssize_t nread;
	char *line;

	size = 0;

	while (true)
	{
		printf("$ ");

		nread = getline(&line, &size, stdin);

		if (nread != -1)
			printf("%s", line);
	}

	return (0);
}