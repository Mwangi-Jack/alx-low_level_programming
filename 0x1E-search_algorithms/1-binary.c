#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Functioin
 *
 * Description: this function implements Binary Search Algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: the number of elements of the array
 * @value: the value to search for
 *
 * Return: returns index where value is located or
 * -1 if value not present or array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		m = (int)(l + r) / 2;

		if (array[m] == value)
		{
			l = m + 1;
		} else if (array[m] > value)
		{
			r = m - 1;
		} else
		{
			return (m);
		}

	}

	return (-1);
}
