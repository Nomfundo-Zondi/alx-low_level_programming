#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print function first before main function
 *
 * Return: nothing
 */
void first(void)
{
	printf("You're the beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

