#include "main.h"

/**
 * get_bit - It will returns the value of 
 * a bit at an index in a decimal number
 * @n: number to be searched
 * @index: This is the index of the bit
 *
 * Return: It will return value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_var;

	if (index > 63)
		return (-1);

	bit_var = (n >> index) & 1;

	return (bit_var);
}
