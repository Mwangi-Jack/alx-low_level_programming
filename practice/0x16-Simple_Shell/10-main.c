#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * @argc: argument count
 * @argv: argument vector
 * @env: environment variables
 *
 * Return: Always Success (0)
*/

int main(int __attribute__((unused)) argc, char *env[])
{
	char **environ_var = environ;

	printf("address of env using main function: %p\n", *env);
	printf("Address of  env using Global variable environ %p\n", *environ_var);

	return (0);
}
