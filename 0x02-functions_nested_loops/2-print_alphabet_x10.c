#include <stdio.h>

/**
 * print_alphabet_x10 - function
 * Description: This function prints the alphabets 10 times
 * Return: Always Success (0)
*/

void print_alphabet_x10(void)
{
char a;
int  i;


for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
}
