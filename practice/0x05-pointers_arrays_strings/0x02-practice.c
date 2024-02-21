#include <stdio.h>

/**
 * modif_my_param - this function does not modify n
 * @n: integer
 *
 * Return: nothing.
 */
void modif_my_param(int *n)
{
	*n = 402;
}

/**
 * main - parameters are passed by value
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 98;
	printf("Value of 'n' before: %d\n", n);
	modif_my_param(&n);
	printf("Value of 'n' after: %d\n", n);
	return (0);
}
