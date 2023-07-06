#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - get the binary value at an index
 * @n: indexed number given
 * @index - index
 *
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int comp_i = 0;

	while (n)
	{
		if (comp_i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}
		n = n / 2;
		comp_i++;
	}

	if (index > comp_i && index < 63)
		return (0);

	return (-1);
}

