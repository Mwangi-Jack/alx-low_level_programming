#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main- Entry point
 *
 * Description: print "$" and wait for input
 *
 * Return: Always Success (0)
*/

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");
	while ((read = getline(&line, &len, stdin)) != -1)
	{
		printf("Read %lu characters:\n", (size_t)read);
		printf("Line: %s", line);
		printf("$ ");
	}

	free(line);

	return (0);

}
