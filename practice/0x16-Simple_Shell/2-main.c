#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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

	while ((read = getline(&line, &len, stdin)) != -1)
	{
		line[strcspn(line, "\n")] = '\0';
		printf("Read %lu characters:\n", (size_t)read);
		printf("Line: %s", line);
		printf("1: %c, 2: %c, 3: %c\n", line[0], line[1], line[2]);
	}

	free(line);

	return (0);

}
