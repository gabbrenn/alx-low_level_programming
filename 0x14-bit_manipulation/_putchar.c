#include "main.h"
#include <unistd.h>
/**
 * _putchar - Prototype that Writes the character c to stdout
 * @c: This is the character to print
 *
 * Return: Return 1 on success otherwise return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
