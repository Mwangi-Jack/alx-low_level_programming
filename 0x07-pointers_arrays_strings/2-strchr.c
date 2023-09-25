#include <stddef.h>
#include "main.h"


/**
 * _strchr- function
 *
 * Description: this function locates a character in a string
 *
 * @s: holds a string value to search from
 * @c: holds the character to search
 *
 * Return: returns a pointer or NULL if character is not found
*/

char *_strchr(char *s, char c)
{
int i;

i = 0;

while (s[i])
{
if (s[i] == c)
{
return (&s[i]);
i++;
}
}

return (NULL);
}
