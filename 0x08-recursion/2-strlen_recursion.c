#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Function
 *
 * Description: returns the length of a string recursively
 *
 * @s: string to get its length
 *
 * Return: returns an integer
*/

int _strlen_recursion(char *s)
{
	int n;

	n = 0;

	if (*s)
	{
		n = n + 1;
		_strlen_recursion(s + 1);
	}

	return (n);
}
