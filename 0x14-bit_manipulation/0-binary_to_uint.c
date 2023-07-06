#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_unit - conversion of binary to integer
 * @b: binary to convert
 *
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	length = _strlen(b);
	while (length--)
	{
		if (b[length] != 48 && b[length] != 49)
			return (0);

		if (b[length] == 49)
			sum += 1 << count;

		count++;
	}
	return (sum);
}

/**
 * _strlen - return string length
 * @s: string count
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}

