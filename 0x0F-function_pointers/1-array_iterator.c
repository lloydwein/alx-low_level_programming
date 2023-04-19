#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: array of elements
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t elements;

	elements = 0;
	if (array == NULL || size <= 0 || action == NULL)
	{
		return;
	}
	while (elements < size)
	{
		action(array[elements++]);
	}
}
