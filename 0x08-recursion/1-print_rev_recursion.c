#include "main.h"

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
	int len;

	if (*s)
	{
		len = strlen(s);
		_putchar(s[len - 1]);
		_print_rev_recursion(--s);
	} else
	{
		_putchar("\n");
	}
}
