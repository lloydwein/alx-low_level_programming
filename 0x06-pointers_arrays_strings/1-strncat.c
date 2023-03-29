#include "main.h"

/**
 * *_strncat - concatenates two strings
 * _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: appended to string
 * @src: string to be appended to dest
 * @n: number of bytes
 * Description: a function
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x++])
	{
		y++;
	}

	for (x = 0; src[x] && x < n; x++)
	{
		dest[y++] = src[x];
	}

	return (dest);
}
