#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function
 *
 * Description: function to print strings (variadic concept)
 *
 * @separator: char to separate printed strings
 * @n: number of strings  passed to the function
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
			i++;
		}

		if (i == n - 1)
		{
			printf("%s", str);
			break;
		}

		printf("%s%s", str, separator);

	}
	printf("\n");

}
