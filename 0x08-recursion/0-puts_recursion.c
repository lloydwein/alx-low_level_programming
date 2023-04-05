#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: c string to be written
 * Description: a function that writes the string s and a trailing newline to
 * stdout
 * Return: nonnegative number on success, or EOF on error
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
