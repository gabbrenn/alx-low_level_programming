#include "main.h"

/**
 * flip_bits - Prototype to counts the number of bits to change
 * in order to  get from one number to another
 * @n: This is first number
 * @m: This is second number
 *
 * Return: It will return the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (g = 63; g >= 0; g--)
	{
		current = exclusive >> g;
		if (current & 1)
			count++;
	}

	return (count);
}

