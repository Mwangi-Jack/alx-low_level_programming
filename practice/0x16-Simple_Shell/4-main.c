#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: function to execute a another program
 *
 * Return: Always Success (0)
*/

int main(void)
{
	char *program = "/bin/mkdir";
	char *args[3];
	char *env[] = {NULL};

	args[0] = program;
	args[1] = "executeme";
	args[2] = NULL;

	if (execve(program, args, env) == -1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}

	printf("This won't be printed if Successful\n");
	return (0);
}
