#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: C string to be scanned
 * @c: character to be searched in s
 * Description: a function that returns a pointer to the first occurrence
 * of the character c in the string s
 * Return: pointer to the matched character or NULL if the character is not
 * found
 */

char *_strchr(char *s, char c)
{
	char *pointer;

	pointer = s;
	while (*pointer != c)
	{
		if (*pointer == 0)
		{
			return (0);
		}
		pointer++;
	}
	return (pointer);
}
