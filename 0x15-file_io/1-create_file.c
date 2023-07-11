#include "main.h"

/**
 * create_file - It will Creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string.
 *
 * Return: If the function fails - -1 Else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, g, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(fd, text_content, l);

	if (fd == -1 || g == -1)
		return (-1);

	close(fd);

	return (1);
}
