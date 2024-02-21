#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Gets the length of the string
 *
 * @s: pointer to string
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len += 1;
	}

	return (len);
}


/**
 * rev_string - Function to reverse a string
 *
 * @s: pointer to string to reverse
 *
 * Return: nothing (void)
*/

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int count = 0;
	char cpy[20];

	strcpy(cpy, s);

	while (*(s + count) != '\0')
	{
		s[count] = cpy[len];
		count += 1;
		len -= 1;
	}

}
