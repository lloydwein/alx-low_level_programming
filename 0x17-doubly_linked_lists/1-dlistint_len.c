#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: pointer to passed node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = NULL;
	size_t elements = 0;

	if (h == NULL)
		return (0);
	node = h;
	while (node != NULL)
	{
		elements++;
		node = node->next;
	}
	return (elements);
}
