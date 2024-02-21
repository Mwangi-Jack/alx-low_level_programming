#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: showcase how argc and argv are used
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always success (0)
*/

int main(int argc, char **argv[])
{
	int i;

	printf("This function has %d argument(s) and here they are", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
