#include "main.h"

/**
 * get_endianness - check endianness function
 * Return: 0 if big endian, 1 little endia
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}

