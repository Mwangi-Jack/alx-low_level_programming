#include <stdio.h>
#include <unistd.h>

/**
 * main- Entry Point
 *
 * Description: this function gets the current PID and its PPID
 *
 * Return: Always Success (0)
*/


int main(void)
{
	int pid, ppid;

	pid = getpid();
	ppid = getppid();

	printf("Process ID : %d \n Parent Process ID : %d \n", pid, ppid);


	return (0);
}
