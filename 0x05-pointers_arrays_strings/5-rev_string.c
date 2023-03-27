#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string characters to be reversed
 * Description: a function
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char string;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x > 0)
	{
		for (y = 0; y < (x - 1); y++)
		{
			string = s[y + 1];
			s[y + 1] = s[y];
			s[y] = string;
		}
		x--;
	}
}
