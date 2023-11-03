#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - Function
 *
 * Description: exercise for fork + wait  + excecve
 *
 * Return: Always Success (0)
*/

int main(void)
{
	char *program = "/bin/ls";
	char *args[3];
	char *env[] = {NULL};
	pid_t child_pid;
	int status, i;

	args[0] = program;
	args[1] = "-l";
	args[2] = "/tmp";

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();

		if (child_pid < 0)
		{
			perror("fork");
		} else if (child_pid == 0)
		{
			if (execve(program, args, env) == -1)
			{
				perror("execve");
				exit(EXIT_FAILURE);
			}
		} else
		{
			wait(&status);
		}
	}

	return (0);
}
