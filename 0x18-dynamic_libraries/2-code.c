#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * Description: a function
 * @c: digits to be checked
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

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

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: character to print
 * Description: a function
 * Return: void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @src: string pointer
 * @dest: array
 * Description: a funcyion
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int lng = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	lng = a;
	for (a = 0; a < lng && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a <= lng; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}

/**
 * _atoi - convert a string to an integer
 * Description: a function
 * @s: character to be checked
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
