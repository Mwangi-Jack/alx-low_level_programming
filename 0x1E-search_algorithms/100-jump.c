#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function
 *
 * Description: this function implements the jump search algorithm
 *
 * @array: pointer to the first element of the array to search from
 * @size: size/length of the array
 * @value: value to search
 *
 * Return: returns the index of the found element otherwise -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step;
	int  a = 0, min;

	if (array == NULL)
		return (-1);

	step = (int)sqrt(size);
	min = MIN(step, size) - 1;

	while (min < value)
	{
		a = step;
		step = step + step;

		if (a >= (int)size)
			return (-1);
	}

	while (a < value)
	{
		a = a + 1;
		if (a == (int)MIN(step, size))
			return (-1);
	}

	if (a == value)
		return (a);

	return (-1);

}
