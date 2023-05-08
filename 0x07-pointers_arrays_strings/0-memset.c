#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: bytes of memort area to fill
 *
 * Return: memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
