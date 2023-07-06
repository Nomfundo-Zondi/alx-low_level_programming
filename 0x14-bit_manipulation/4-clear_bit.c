#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - value set of 0 at given index
 * @n: modified number
 * @index: index of number to modify
 *
 * Return: 1 if worked or -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}

