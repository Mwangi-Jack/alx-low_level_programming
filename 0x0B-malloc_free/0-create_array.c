#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function
 *
 * Description: A function to create and array of characters
 *
 * @size: size of the array to create
 * @c: character to initialize the array with
 *
 * Return: Either a pointer to array or NULL
 *
*/


char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
