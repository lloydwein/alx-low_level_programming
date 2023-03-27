#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * Description: a function
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
