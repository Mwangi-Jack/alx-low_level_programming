#include "main.h"

/**
 * create_file - Function
 *
 * Description: function to create a file
 *
 * @filename: name of file to create
 * @text_content: pointer to text contect
 *
 * Return: returns Success (1) or fail (-1)
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t filed = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	filed = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (filed < 0)
		return (-1);

	while (text_content[i])
		i++;

	chk = write(filed, text_content, i);

	if (chk < 0)
		return (-1);

	close(filed);
	return (1);
}
