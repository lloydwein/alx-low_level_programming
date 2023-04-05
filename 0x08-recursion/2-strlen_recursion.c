#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be found
 * Description: a function that calculates the length of the string s,
 * excluding the terminating null byte (aq\0aq)
 * Return: number of bytes in the string s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
