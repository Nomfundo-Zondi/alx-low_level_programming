#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - number of bits to flip from one to another
 * @n: first number
 * @m: second number
 *
 * Return: number used to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}

