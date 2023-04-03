#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main C string to be scanned
 * @accept: string containing the list of characters to match in s
 * Description: a function that calculates the length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int string;
	unsigned int byte;

	while (*s)
	{
		for (string = 0; accept[string]; string++)
		{
			if (*s == accept[string])
			{
				byte++;
				break;
			}
			else if (accept[string + 1] == '\0')
			{
				return (byte);
			}
		}
		s++;
	}
	return (byte);
}
