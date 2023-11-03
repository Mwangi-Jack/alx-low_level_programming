#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: function to print all commandline arguments
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always Success(0)
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
