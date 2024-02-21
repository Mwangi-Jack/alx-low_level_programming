#include "main.h"
#include <stdio.h>

/**
 * _puts- Function to print char to stdout
 *
 * @str: string to print
 *
 * Return: nothing (void)
*/

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len += 1;
	}

}
