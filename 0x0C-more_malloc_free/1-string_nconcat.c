#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Function
 *
 * Description: function to concatenate two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: n bytes to take from string two
 *
 * Return: returns a pointer to the new string or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	int len1 = strlen(s1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	ptr = malloc(sizeof(char) * strlen(s1) + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < strlen(s1); j++)
	{
		ptr[j] = s1[j];
	}

	for (i = 0; i < n; i++)
	{
		ptr[i + len1] = s2[i];
	}
	ptr[len1 + n + 1] = '\0';

	return (ptr);
}
