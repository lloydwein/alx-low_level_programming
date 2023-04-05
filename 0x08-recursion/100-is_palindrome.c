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

/**
 * comp - compares
 * @s: string
 * @entry: start
 * @exit: stop
 * Return: 0 or 1
 */

int comp(char *s, int entry, int exit)
{
	if (entry >= exit)
	{
		return (1);
	}
	if (s[entry] != s[exit])
	{
		return (0);
	}
	if (entry < exit)
	{
		return (comp(s, entry + 1, exit - 1));
	}
	return (1);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * Description: An empty string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	char *temp;
	int size;
	int start = 0, stop;

	temp = s;
	size = _strlen_recursion(temp);
	stop = size - 1;
	{
		return (comp(s, start, stop));
	}
}
