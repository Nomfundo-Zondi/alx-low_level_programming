#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: number to modify
 * @index: index number to modify
 *
 * Return: 1 for work, or -1 error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}

