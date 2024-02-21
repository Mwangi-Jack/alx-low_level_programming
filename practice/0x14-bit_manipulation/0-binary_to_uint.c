#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - Function
 * Description: function to get the length of a string
 * @b: string
 *
 * Return: returns int
*/
int _strlen(const char *b)
{
	unsigned int  i = 0;
	char *s;

	s = strdup(b);

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - Function
 *
 * @b: pointer to  a string of 0 and 1 chars
 *
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, inc = 1;
	int i;
	char *str = strdup(b);
	int len = _strlen(b);


	for (i = 0; i < len; i++)
	{
		printf("%d ", str[i]);
		if (str[i] != 49 && str[i] != 48)
			return (0);

		if (str[i] == 49)
		{
			dec = dec + (1 * inc);
		};

		inc = inc * 2;

	}

	return (dec);
}
