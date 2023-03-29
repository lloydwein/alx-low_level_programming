#include "main.h"

/**
 * *leet - that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @string: string
 * Return: encoded string
 */

char *leet(char *string)
{
	int a;
	int b = 0;
	char x[] = "aAeEoOtTlL";
	char y[] = "43071";

	while (string[b] != '\0')
	{
		for (a = 0; a < 10; a++)
		{
			if (string[b] == x[a])
			{
				string[b] = y[a / 2];
			}
		}
		b++;
	}
	return (string);
}
