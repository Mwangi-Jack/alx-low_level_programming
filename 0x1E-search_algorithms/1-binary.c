#include <stdio.h>
#include "search_algos.h"


/**
 * print_array- function
 *
 * Description: to print an array
 *
 * @array: pointer to the first element of the array
 * @start: size of the array
 * @stop: starting point of printing the array
 *
 * Return: Always success (0)
*/

int print_array(int *array, size_t start, size_t stop)
{
	size_t i = start;

	printf("Searching in array: ");
	while (i < stop)
	{
		printf("%d, ",  array[i]);
		i += 1;
	}
	printf("%d\n", array[stop]);

	return (0);
}

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
	size_t l = 0, r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		size_t m = (int)(l + r) / 2;

		print_array(array, l, r);

		if (array[m] < value)
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
