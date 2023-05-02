#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * Return: Alwyas 0. Success.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

