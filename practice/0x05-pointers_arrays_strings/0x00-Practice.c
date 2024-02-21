#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always Success (0)
*/


int main(void)
{
int var[3] = {10, 100, 200};
int i, *ptr;
const int MAX = 3;


ptr = var;

for (i = 0; i < MAX; i++)
{
printf("Address of var[%d] = %p\n", i, ptr);
printf("Value of var[%d] = %d\n", i, *ptr);

ptr++;
};

return (0);
}
