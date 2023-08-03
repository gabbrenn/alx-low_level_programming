#include "main.h"

/**
 * set_bit - Prototype to sets a bit at a given index to 1
 * @n: This pointer to the number to change
 * @index: This is the Index of the bit to set to 1
 *
 * Return: It will  return 1 for success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
