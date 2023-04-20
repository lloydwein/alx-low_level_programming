#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: constant integer
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int b = 0;
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);
	for (i = 0; i < n; i++)
	{
		b += va_arg(a_list, int);
	}
	va_end(a_list);
	return (b);
}
