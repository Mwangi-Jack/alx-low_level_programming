#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: function to get environment variables
 *
 * Return: Always Success (0)
*/

int main(void)
{
	char **env_var = environ;

	while (*env_var)
	{
		printf("%s\n", *env_var);
		env_var++;
	}

	return (0);

}
