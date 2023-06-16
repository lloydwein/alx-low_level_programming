#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * list
 * @head: pointer to the dlistint_t list
 * @n: value to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new;
		new->prev = last;
	}

	return (new);
}
