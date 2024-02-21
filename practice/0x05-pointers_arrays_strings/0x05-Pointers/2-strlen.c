#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function to get length of a string
 *
 * @s: pointer to string
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int len = 0;


	while (*(s + len) != '\0')
	{
		len += 1;
	}

	return (len);

}
