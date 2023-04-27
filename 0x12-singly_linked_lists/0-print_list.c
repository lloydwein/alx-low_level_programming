#include "lists.h"
#include <stddef.h>

/**
 * print_list - Prints all the elements of a linked list
 *
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			current = current->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
			current = current->next;
			count++;
		}
	}

	return (count);
}
