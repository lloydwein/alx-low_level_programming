#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
