#include "lists.h"

/**
 * print_dlistint - prints elements of dlistint_t list
 * @h: pointer to passed node
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = NULL;
	size_t elements = 0;

	node = h;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		elements++;
	}
	return (elements);
}
