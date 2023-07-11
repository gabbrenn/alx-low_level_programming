#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file.
 * @filename: A pointer of name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: When the function fails or filename is NULL - -1.
 *         When the file does not exist the user lacks write permissions - -1.
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, gw, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	gw = write(fd, text_content, i);

	if (fd == -1 || gw == -1)
		return (-1);

	close(fd);

	return (1);
}

