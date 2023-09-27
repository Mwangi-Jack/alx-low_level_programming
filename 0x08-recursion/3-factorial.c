#include "main.h"

/**
 * factorial - Function
 *
 * Description: the function gets the factorial of a given number
 *
 * @n: the number to get its factorial
 *
 * Return: returns an int
*/

int factorial(int n)
{
	return (n + factorial(n - 1));
}
