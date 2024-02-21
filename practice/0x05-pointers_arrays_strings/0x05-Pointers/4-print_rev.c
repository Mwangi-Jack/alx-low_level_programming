#include "main.h"
#include <stdio.h>


/**
 * _strlen - Gets the length of the string
 *
 * @s: pointer to string
 *
 * Return: length of string
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

/**
 * print_rev - Prints string in reverse
 *
 * @s: string to print
 *
 * Return: nothing (void)
*/

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		printf("%c", *(s + len));
		len -= 1;
	}
}
