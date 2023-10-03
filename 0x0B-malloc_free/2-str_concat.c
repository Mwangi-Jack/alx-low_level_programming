#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat- Function
 *
 * Description: this function concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: Returns either a pointer or NULL
*/

char *str_concat(char *s1, char *s2)
{
	int i, c = 0, k = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[c] != '\0')
		c++;

	while (s2[k] != '\0')
		k++;


	str = malloc((c + k) * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		str[i] = s1[i];

	for (i = 0; i < k; i++)
		str[i + c] = s2[i];

	return (str);
}
