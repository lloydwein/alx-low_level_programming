#include "lists.h"
#include "lists.h"

/**
 * _strdup - Duplicates a string in a new memory space.
 *
 * @str: The string to be duplicated.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

/**
 * _strlen - returns the length of a string
 * @s: character pointer
 * Description: a function
 * Return: length of a string
 */

int _strlen(const char *s)
{
	unsigned int str_len;

	for (str_len = 0; s[str_len] != '\0'; str_len++)
	{
	}

	return (str_len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of the list_t list
 * @str: string to be added as the new node's str element.
 * Return: pointer to the new head of the list_t list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = _strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

