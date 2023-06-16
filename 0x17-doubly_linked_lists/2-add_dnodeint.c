#include "lists.h"

/**
 * add_dnodeint - Add new node at beginning of list
 * @head: head of list
 * @n: new node value
 * Return: new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	(*head)->prev = node;
	return (node);
}
