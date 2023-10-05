#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function
 *
 * Description: a function to allocate memory using malloc
 *
 * @b: size
 *
 * Return: returns pointer to allocated memory or fail status (98)
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
