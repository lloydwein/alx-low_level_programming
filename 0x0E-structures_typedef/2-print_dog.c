#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d);

/**
 * print_dog - a function that prints a struct dog
 * @d: input poiter to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
