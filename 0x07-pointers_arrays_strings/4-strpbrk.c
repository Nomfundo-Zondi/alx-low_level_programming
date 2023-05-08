#include "main.h"
/**
 * _strpbrk - search string for any set of bytes
 * @s: string source
 * @accept: characters accepted
 *
 * Return: first string occurrence in string:w of any bytes in the accept
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}

