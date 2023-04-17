#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d);

/**
 * free_dog - a function that frees dogs
 * @d: pointer to struct dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
