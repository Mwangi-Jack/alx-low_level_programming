#include <stdio.h>

/**
 * _isalpha - Function
 *
 * Description: This function checks for alphabetic character
 *
 * @c: parameter to check
 *
 * Return: Returns (1) if c is a leter and (0) otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
{
return (1);
}
else
{
return (0);
}

}
