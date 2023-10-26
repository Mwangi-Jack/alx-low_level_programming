#include "main.h"

/**
 * clear_bit - Function
 *
 * Description: function to set the value of a bit to 0 at a given index
 *
 * @n: bit to set to 0
 * @index: index for which to set
 *
 * Return: return succuss (1) or fail (-1)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, mask;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	mask = 1 << index;

	*n = *n & ~mask;

	return (1);
}
