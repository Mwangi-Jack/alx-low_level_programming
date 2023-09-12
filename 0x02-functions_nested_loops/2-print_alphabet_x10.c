#include <stdio.h>

/**
 * print_alphabet_x10 - function
 * Description: This function prints the alphabets 10 times
 * Return: Always Success (0)
*/

void print_alphabet_x10(void)
{
int i = 10;
char j;

while (i < 10)
{
/* code */
for (j = "a"; j < "z"; j++)
{
putchar(j);
}
putchar("\n");
}
}
