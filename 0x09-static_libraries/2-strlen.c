#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: characters to be checked
 * Description: a function
 * Return: length of a string
 */

int _strlen(char *s)
{
	int strlng = 0;

	while (*s != '\0')
	{
		s++;
		strlng++;
	}
	return (strlng);
}
