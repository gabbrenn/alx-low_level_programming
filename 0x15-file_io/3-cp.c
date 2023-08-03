#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Prototype to Allocates 1024 bytes for a buffer.
 * @file: The File name buffer is storing chars.
 *
 * Return: It will return A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file);
void close_file(int fd);

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Function Closes file descriptors.
 * @fg: This is The file descriptor to be closed.
 */
void close_file(int fg)
{
	int d;

	d = close(fg);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fg);
		exit(100);
	}
}

/**
 * main - How to Copies the contents of a file to another file.
 * @argc: This is number of arguments supplied to the program.
 * @argv: That is an array of pointers to the arguments.
 *
 * Return: It will return 0 on success.
 *
 * Description: When the argument count is incorrect -> exit code 97.
 * When file_from does not exist or cannot be read -> exit code 98.
 * When file_to cannot be created or written to -> exit code 99.
 * When file_to or file_from cannot be closed -> exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

