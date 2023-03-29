#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * Description: a function
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int arr;

	for (x = n - 1; x > n / 2; x--)
	{
		arr = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = arr;
	}
}
