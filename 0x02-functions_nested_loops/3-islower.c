#include <stdio.h>
/**
 * _isLower- Function
 *
 * Description: This function checks for lowercase characters
 *
 * @c: parameter to check
 * Return: Returns (1) if lowercase and (0) otherwise
*/

int _isLower(int c)
{
char i;

for (i = "a"; i < "z"; i++)
{
if (i == c)
{
return (1);
}
else
{
return (0);
}
}
}
