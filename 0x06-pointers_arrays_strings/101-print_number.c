#include "main.h"

/**
 * print_number - prints an integer
 * Description: a function
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int output;

	output = n;
	if (n < 0)
	{
		_putchar('-');
		output = -n;
	}

	if (output / 10 != 0)
	{
		print_number(output / 10);
	}
	_putchar((output % 10) + '0');
}
