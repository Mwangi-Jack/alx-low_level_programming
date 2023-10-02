#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Level
 *
 * Description: program to multiply two numbers from commandline args
 *
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: returns either  Success (0) or Error (1)
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
