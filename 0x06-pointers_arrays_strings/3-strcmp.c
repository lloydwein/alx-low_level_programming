#include "main.h"

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
