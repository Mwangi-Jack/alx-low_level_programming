#include "main.h"

/**
 * _pow_recursion - Function
 *
 * Description: returns the power of an integer
 *
 * @x: the value to get its power
 * @y: the power
 *
 * Return: returns an integer
*/

int _pow_recursion(int x, int y)
{

	if (y  < 0)
	{
		return (-1);
	}

	if (y > 0)
	{
	return (x * _pow_recursion(x, y - 1));
	};

	return (1);
}
