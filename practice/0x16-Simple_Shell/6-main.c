#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main- Entry Point
 *
 * Description: waiting for child process to finish execution
 *
 * Return: Always Success (0)
*/

int main(void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid < 0)
	{
		perror("fork");
	} else if (child_pid == 0)
	{
		printf("Child Process: PID=%d\n", getpid());
		sleep(3);
	} else
	{
		printf("Parent Process: Child PID=%d, Parent PID=%d\n", child_pid, getpid());
		wait(&status);

		if (WIFEXITED(status))
			printf("chile Exited With Status %d\n", WEXITSTATUS(status));
	}

	return (0);
}
