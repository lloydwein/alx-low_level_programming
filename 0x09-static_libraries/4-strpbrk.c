#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: C string to be scanned
 * @accept: C string containing the characters to match
 * Description: a function that locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int byte;

	while (*s)
	{
		for (byte = 0; accept[byte]; byte++)
		{
			if (*s == accept[byte])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
