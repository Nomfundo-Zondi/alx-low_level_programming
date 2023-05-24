#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - return sum of a and b
 * @a: - integer 1
 * @b: integer 2
 *
 * Return: sum of two integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return subtracted values
 * @a: integer 1
 * @b: integer 2
 *
 * Return: subtracted output
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: multiplication output
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: division output
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: modulo output
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
