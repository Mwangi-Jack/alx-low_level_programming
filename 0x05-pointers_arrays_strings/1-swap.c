#include <stdio.h>

/**
 * swap_int - Function
 *
 * Description: This function swaps the value of two integers
 *
 * @a: a pointer to an integer value to swap with b
 *
 * @b : a pointer to an integer value to swap with a
 *
 * Return: returns void
*/

void swap_int(int *a, int *b)
{
int j;

j = *a;
*a = *b;
*b = j;

}
