#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: program to print all arguments it recieves
 *
 * @argc: number of arguments passed (argument count)
 * @argv: one dimensional array of arguments (argument vector)
 *
 * Return: Always success(0)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
