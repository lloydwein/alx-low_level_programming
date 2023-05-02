#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list, even if it loops
 * @head: list to print
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *check;
	size_t node_count = 0, index;

	current = head;
	while (current)
	{
		check = head;
		for (index = 0; index < node_count; index++)
		{
			if (check <= current)
			{
				printf("-> [%p] %d\n", (void *)current,
						current->n);
				return (node_count);
			}
			check = check->next;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
