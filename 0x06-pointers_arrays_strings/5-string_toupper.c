#include "main.h"

/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase
 * Description: a function that returns a value equal to string except that all
 * lower (or title) case letters have been converted to upper case
 * @string: string to capitalize
 *
 * Return: uppercase string
 */

char *string_toupper(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
	{
		if (string[x] <= 'z' && string[x] >= 'a')
		{
			string[x] -= 32;
		}
	}
	return (string);
}
