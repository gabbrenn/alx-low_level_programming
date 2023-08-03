#include "main.h"

/**
 * clear_bit - Prototype to sets the value of a given bit to 0
 * @n: That is the pointer to the number to change
 * @index: This is the Index of the bit to clear
 *
 * Return: It will return 1 for success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

