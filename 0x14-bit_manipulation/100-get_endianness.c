#include "main.h"

/**
 * get_endianness - It will checks if a machine is little or big endian
 * Return: It wiil return 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *c = (char *) &g;

	return (*c);
}

