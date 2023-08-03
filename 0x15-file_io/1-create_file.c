#include "main.h"

/**
 * create_file - Prototype of Creating a file.
 * @filename: That is A pointer to the name of the file to be created.
 * @text_content: That pointer to String to write to the File.
 *
 * Return: If the function fails will return - -1.
 *         Otherwise will return - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fg, g, lem = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lem = 0; text_content[lem];)
			lem++;
	}

	fg = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(fg, text_content, lem);

	if (fg == -1 || g == -1)
		return (-1);

	close(fg);

	return (1);
}

