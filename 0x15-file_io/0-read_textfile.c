#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Prototype to read text file print to STDOUT.
 * @filename: This is Text of file will be readen
 * @letters: That is number of letters will be readen
 * Return: Return w actual amount of bytes read and printed
 *        otherwise 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bul;
	ssize_t fg;
	ssize_t g;
	ssize_t b;

	fg = open(filename, O_RDONLY);
	if (fg == -1)
		return (0);
	bul = malloc(sizeof(char) * letters);
	b = read(fg, bul, letters);
	g = write(STDOUT_FILENO, bul, b);

	free(bul);
	close(fg);
	return (g);
}

