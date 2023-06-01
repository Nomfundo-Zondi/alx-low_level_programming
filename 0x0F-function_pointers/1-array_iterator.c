#include "function_pointers.h"
/**
 * array_iterator - action to print hexidecimal
 * @array: array set
 * @size:  size of array
 * @action: pointer to function
 *
 * Return: hexidecimal
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
