#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string that needs to be reversed
 * Description: a function that is used to reverse the given string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
