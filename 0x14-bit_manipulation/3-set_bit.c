#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit value to 1 at index
 * @n: modified number
 * @index: index number modified
 *
 * Return: 1 if worked or -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}

