#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * _puts_recursion - Function
 *
 * Description: prints a string recursively
 *
 * @s: string to print
 *
 * Return: returns void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	 putchar(*s);
	_puts_recursion(s + 1);
}