#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: head of linked list
 * @index: index of node starting 0
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}

