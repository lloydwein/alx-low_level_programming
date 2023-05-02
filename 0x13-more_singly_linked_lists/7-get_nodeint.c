#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the node to return.
 *
 * Return: If the function fails, NULL. Otherwise, the nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}

	return (current);
}
