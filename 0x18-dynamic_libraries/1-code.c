#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 *
 * Description: a function
 * Return: 1 if c is lowercase, else 0
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Desription: a function
 * Return: 1 if c is a letter, lowercase or uppercase, else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - computes the absolute value of an integer
 * Desription: a function
 * @ch: character to be checked
 * Return: absolute value
 */

int _abs(int ch)
{
	if (ch < 0)
	{
		ch = -ch;
	}
	return (ch);
}

/**
 * _isupper - checks for uppercase character
 * Description: a function
 * @c: character to be checked
 * Return: 1 if c is uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
