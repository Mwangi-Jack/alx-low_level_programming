#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _getenv- Function
 *
 * Description: this function searches for an environment variable
 *
 * @name: environment variable to search
 *
 * Return: returns a pointer to the env var or NULL if not found
*/


char *_getenv(const char *name)
{
	char **env_var = environ;

	while (*env_var)
	{
		char *delimiter = strtok(*env_var, "=");

		if (delimiter)
		{
			int name_length = delimiter - *env_var;

			if (strncmp(*env_var, name, name_length) == 0)
			{
				return (delimiter + 1);
			}
		}

		env_var++;
	}

	return (NULL);
}



/**
 * main - Entry Point
 *
 * Description: to test the _getenv function
 *
 * Return: Always Success (0)
*/

int main(void)
{
	char *name = "PATH";
	char *res = _getenv(name);


	if (res != NULL)
	{
		printf("Value of %s: %s\n", name, res);
	} else
	{
		printf("Environment Variable Not Found\n");
	}

	printf("%s\n", res);

	return (0);
}
