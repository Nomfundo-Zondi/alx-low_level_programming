#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @memb: number of members
 * @size: bytes size
 *
 * Return: member or size, return NULL if fails
 */
void *_calloc(unsigned int memb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (memb == 0 || size == 0)
		return (NULL);

	l = memb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

