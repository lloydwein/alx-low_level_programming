#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp function does not
 * return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	while (index < size)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
