#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizing words of a string
 * @s: string to be capiitalized
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 &&  (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (check_seperators((s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z')))
			s[i + 1] -= 32;

		i++;
	}

	return (s);
}

/**
 * check_seperators - seperators of words suchs space, tabulation, new line,
 * ,, ;, ., !, ?
 * @c: input character
 * Return: 1 if seperator, 0 otherwise
 */
char check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}

