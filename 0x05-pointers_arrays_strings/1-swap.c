#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: an integer to swap
 * @b: second integer to swap
 * Return: Always 0. Success.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

