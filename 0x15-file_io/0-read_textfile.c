#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: Text File will being read
 * @letters: number of letters will be readed
 * Return: wt- actual the number of bytes read and printed
 * 0 when function fail or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wt;
	ssize_t td;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	td = read(fd, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, td);

	free(buffer);
	close(fd);
	return (wt);
}

