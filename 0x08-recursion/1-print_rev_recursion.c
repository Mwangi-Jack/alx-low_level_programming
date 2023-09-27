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
	int len;

	if (*s)
	{
		len = strlen(s);
		_putchar(s[len--]);
		_print_rev_recursion(++s);
	} else
	{
		_putchar('\n');
	}
}
