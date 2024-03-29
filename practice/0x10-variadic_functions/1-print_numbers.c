#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function
 *
 * Description: printing numbers followed by a new line
 *
 * @separator: character to separate arguments printed
 * @n: number of integers passed to the function
 *
 * Return: void
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i == n - 1)
		{
			printf("%d", num);
			break;
		}


		printf("%d%s", num, separator);

	}
	printf("\n");
}
