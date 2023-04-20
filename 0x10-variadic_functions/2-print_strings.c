#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *tmp;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(strs, char *);
		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		else if (i == n - 1)
			printf("\n");
	}
	va_end(strs);
}
