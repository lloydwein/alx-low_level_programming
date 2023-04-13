#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Description: in this function, the array created should contain all the
 * values from min (included) to max (included), ordered from min to max
 * Return: pointer to the newly created array
 * If min > max, return NULL If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *pointer;
	int array = 0;

	if (min > max)
		return (0);

	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
		return (0);

	array = 0;
	while (min <= max)
	{
		pointer[array] = min;
		min++;
		array++;
	}

	return (pointer);
}
