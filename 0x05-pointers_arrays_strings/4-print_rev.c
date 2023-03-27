#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: character to print
 * Description: a function
 * Return: void
 */

void print_rev(char *s)
{
	int string = 0;

	while (*s != '\0')
	{
		s++;
		string++;
	}
	while (string > 0)
	{
		s--;
		_putchar(*s);
		string--;
	}
	_putchar('\n');
}
