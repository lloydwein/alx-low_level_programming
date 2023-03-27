#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line
 * Description: a function
 * @str: string character to check
 * Return: void
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; ++x)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
