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
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
