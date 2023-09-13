#include <stdio.h>

/**
 * print_alphabet - Function
 *
 * Description: This function prints alphabets
 *
 * Rerturn: Returns void
*/

void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar("\n");
}
