#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: number of bytes
 * Description: this function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * Return: void
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int num;

	if (nmemb == 0 || size == 0)
		return (0);

	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (0);
	for (num = 0; num < (nmemb * size); num++)
		memory[num] = '\0';

	return (memory);
}
