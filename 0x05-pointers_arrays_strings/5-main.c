#include "main.h"
#include <stdio.h>
/**
 * main - check code 
 * Return: Always 0. Success.
 */
int main(void)
{
	char s[11] = "Holberton!";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
