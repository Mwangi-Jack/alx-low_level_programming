#include "main.h"

/**
 * swap_int - Function to swap integers
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: nothing (void)
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
