#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - return value of bit at given index
 * @index: index starting from 0 of the bit
 * @n: number to find index
 *
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_t = 0;

	while (n)
	{
		if (comp_t == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}
		n = n / 2;
		comp_t++;
	}

	if (index > comp_t && index < 63)
		return (0);

	return (-1);
}

