#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: characters to be checked
 * Description: a function
 * Return: length of a string
 */

int _strlen(char *s)
{
	int strlng = 0;

	while (*s != '\0')
	{
		s++;
		strlng++;
	}
	return (strlng);
}

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @src: string pointer
 * @dest: array
 * Description: a funcyion
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int lng = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	lng = a;
	for (a = 0; a < lng && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a <= lng; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}

/**
 * *new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;
	int newname;
	int newowner;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (0);

	newname = _strlen(name);
	new->name = malloc(sizeof(char) * (newname + 1));
	if (new->name == NULL)
	{
		free(new);
		return (0);
	}
	new->name = _strcpy(new->name, name);

	newowner = _strlen(owner);
	new->owner = malloc(sizeof(char) * (newowner + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (0);
	}
	new->owner = _strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
