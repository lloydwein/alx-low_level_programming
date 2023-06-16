#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
