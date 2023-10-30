#include "main.h"

/**
 * append_text_to_file - Function
 *
 * Description: function to append text to an existing file
 *
 * @filename: pointer to name of existing file
 * @text_content: pointer to text to append to file
 *
 * Return: Success (1) or Fail (-1)
*/


int append_text_to_file(const char *filename, char *text_content)
{
	int filed = 0, ch = 0, i = 0;

	if (!filename)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		ch = write(filed, text_content, i);

		if (ch < 0)
			return (-1);
	}

	close(filed);
	return (1);

}
