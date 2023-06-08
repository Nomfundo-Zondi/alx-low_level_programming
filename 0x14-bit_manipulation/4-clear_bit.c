#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set value of bit to 0 at given index
 * @index: index starting 0 of bit
 * @n: number to modify
 *
 * Return: 1 works or -1 error
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

