#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Function
 *
 * @s: string to print
 *
 * Description: prints  a string in reverse recursively
 *
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
