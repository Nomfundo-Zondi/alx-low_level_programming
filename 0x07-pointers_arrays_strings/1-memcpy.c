#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: memory dest area
 * @src: memory source area
 * @n: memory bytes area to copy
 *
 * Return: area memory replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}

