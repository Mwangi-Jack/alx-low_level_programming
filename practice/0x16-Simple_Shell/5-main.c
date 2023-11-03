#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - Entry point
 *
 * Description: function to create child process
 *
 * Return: Always Success (0)
*/

int main(void)
{
	pid_t child_PID;

	child_PID = fork();

	if (child_PID < 0)
	{
		perror("fork");
	} else if (child_PID == 0)
	{
		printf("Child Process: PID = %d\n", getpid());
	} else
	{
		printf("Parent Process: Child PID=%d, Parent PID=%d\n", child_PID, getpid());
	}

	return (0);
}
