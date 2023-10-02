#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - Entry Level
 *
 * Description: program to add positive numbers
 *
 * @argc: Argument Count
 * @argv: Argument Vector
 *
 * Return: either Success (0) or Fail (1)
*/


int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0'
			  || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
