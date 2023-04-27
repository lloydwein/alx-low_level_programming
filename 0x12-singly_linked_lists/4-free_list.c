#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the first node in the list.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	current_node = head;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
	free(head);
}
