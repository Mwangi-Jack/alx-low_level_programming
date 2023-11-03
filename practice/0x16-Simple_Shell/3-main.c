#include <stdio.h>
#include <string.h>

/**
 * main- Entry Point
 *
 * Description: function to tockenize (spliting) a string
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always Success (0)
*/

int main(void)
{
	char str[] = "apple banana cherry";
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, " ");
	}

	return (0);
}
