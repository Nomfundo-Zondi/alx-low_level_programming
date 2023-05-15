#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function to concatenates
 * @s1: first string iput
 * @s2: second string input
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *stars1, *stars2;
	int i = 0, lens1 = 0, lens2 = 0;

	stars1 = s1;
	stars2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = stars1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = stars2;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	stars1 = new_str;
	for (; i  < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (stars1);
}

