#include <stdio.h>

/**
 * _strlen - Function
 *
 * @s: pointer to a string to return length
 *
 * Return: Always Success (0)
*/

int _strlen(char *s)
{
int i;

i = 0;

while (s[i])
{
i++;
}

return (i);
}
