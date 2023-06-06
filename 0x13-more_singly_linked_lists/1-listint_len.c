#include <stdio.h>
#include "lists.h"
/**
 * listint_len - number of elements in a list
 * @h:  head of linked list
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}

