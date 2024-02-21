#include <stdio.h>


/**
 * main - deferencing pointers
 *
 * Return: Always Success (0)
*/

int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;

	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp':  %p\n", pp);
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	*p = 402;
	*pp = 'a';

	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	return (0);
}
