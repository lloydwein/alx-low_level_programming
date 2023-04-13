#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: single argument
 * Description: this function Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process
 * termination with a status value of 98
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (!pointer)
	{
		exit(98);
	}
	return (pointer);
}
