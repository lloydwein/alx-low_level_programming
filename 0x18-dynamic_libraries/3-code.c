#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * *_strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Description: a function
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
	{
		b++;
	}

	for (a = 0; src[a]; a++)
	{
		dest[b++] = src[a];
	}

	return (dest);
}

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

/**
 * *_strncpy - copies a string
 * Description: a function
 * @dest: string to append src string to
 * @src: string to append to dest string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for (; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}

/**
 * _strcmp - compares two strings
 * Description: a function that compares the two strings s1 and s2
 * @s1: string 1
 * @s2: string 2
 * Return: integer < = > 0
 */

int _strcmp(char *s1, char *s2)
{
	int number = 0;
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			number = s1[x] - s2[x];
			return (number);
		}
		x++;
	}

	return (number);
}

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b:  value to be set. The value is passed as an int, but the function
 * fills the block of memory using the unsigned char conversion of this value
 * @n: number of bytes to be set to the value
 * Description: a function that copies the character b (an unsigned char)
 * to the first n characters of the string pointed to, by the argument s
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		s[mem] = b;
	}
	return (s);
}
