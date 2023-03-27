#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * Description: a function
 * @n: number of elements of the array to be printed
 * @a: array pointer
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
			printf("%d", a[x]);
		else
			printf("%d, ", a[x]);
	}
	printf("\n");
}
