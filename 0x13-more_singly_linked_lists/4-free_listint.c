#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of linked list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}

