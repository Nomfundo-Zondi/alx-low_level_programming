#include "main.h"
#include <stdio.h>
#include <math.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - natural square root number to return
 * @n: number to calculate the natural square root
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - natural square root calculation
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}

