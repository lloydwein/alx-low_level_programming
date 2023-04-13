#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Description: in this function, The contents will be copied to the newly
 * allocated space, in the range from the start of ptr up to the minimum of
 * the old and new sizes
 * Return: void
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer, *memory;
	unsigned int bytes;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (0);
		return (pointer);
	}

	pointer = malloc(new_size);
	if (pointer == NULL)
		return (0);

	memory = pointer;
	for (bytes = 0; bytes < old_size; bytes++)
		pointer[bytes] = memory[bytes];
	free(ptr);
	return (pointer);
}
