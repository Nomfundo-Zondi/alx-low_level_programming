#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum of all data of list
 * @head: head of linked list
 *
 * Return: 0 if list enpty
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head)
	{
		while (head)
		{
			count += head->n;
			head = head->next;
		}
	}

	return (count);
}

