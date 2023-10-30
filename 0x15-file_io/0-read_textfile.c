#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Function
 *
 * Description: this function reads a text file and prints it
 * to the POSIX standard output
 *
 * @filename: pointer to file name
 * @letters: number of letters the function should read and print
 *
 * Return: returns number of letters read and printed or (0) on fail
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, chk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	fild = open(filename, O_RDONLY);
	if (fild < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chk = read(fild, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(fild);
	free(buffer);
	return (chk);
}
