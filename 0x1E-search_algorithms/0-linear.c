#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Function
 *
 * Description: This function implements the linear search algoritm
 *
 * @array: a pointer to the first element of an array for which to
 * search an item
 * @value: the value to search for
 * @size: the number  of elements in the given array
 *
 * Return: returns first index where value is located or
 * -1 if value not present or array is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i += 1;
	}

	return (-1);
}
