#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array to create
 * @c: character to initialize the array
 * Description: this function returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 * Return: pointer to the array, else NULL
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int num = 0;

	if (size == 0)
	{
		return (0);
	}

	pointer = (char *) malloc(sizeof(char) * size);

	if (pointer == NULL)
	{
		return (0);
	}

	while (num < size)
	{
		*(pointer + num) = c;
		num++;
	}
	*(pointer + num) = '\0';

	return (pointer);
}
