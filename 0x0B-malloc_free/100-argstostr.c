#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Function
 *
 * Description: function to concatenate all the arguments of the program
 *
 * @ac: argument count
 * @av: argument vector
 * ["hello", 1, "World"]
 * Return: returns a pointer to a new string or NUll if  it fails
*/

char *argstostr(int ac, char **av)
{
	int i;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int len = 0;


		while (av[i] != '\0')
			len++;

		print("%d\n", len);
	}

	return (av);
}



