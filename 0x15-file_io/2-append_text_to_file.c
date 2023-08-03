#include "main.h"

/**
 * append_text_to_file - THat Prototype Appends text at the end of a file.
 * @filename: That is a Pointer to the name of the file.
 * @text_content: This is the string to be added to the end of the file.
 *
 * Return: If the function fails or filename is NULL will return - -1.
 *         Else If the file does not Exist the user lacks write permissions - -1.
 *         Else / Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, g, lem = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lem = 0; text_content[lem];)
			lem++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	g = write(a, text_content, lem);

	if (a == -1 || g == -1)
		return (-1);

	close(a);

	return (1);
}

