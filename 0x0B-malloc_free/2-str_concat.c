#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Description: a function
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * Return: pointer to new created string
 */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	unsigned int num1 = 0, num2 = 0, length = 0, height = 0;

	while (s1 && s1[length])
		length++;
	while (s2 && s2[height])
		height++;

	pointer = malloc(sizeof(char) * (length + height + 1));
	if (pointer == NULL)
		return (0);

	num1 = 0;
	num2 = 0;
	if (s1)
	{
		while (num1 < length)
		{
			pointer[num1] = s1[num1];
			num1++;
		}
	}
	if (s2)
	{
		while (num1 < (length + height))
		{
			pointer[num1] = s2[num2];
			num1++;
			num2++;
		}
	}
	pointer[num1] = '\0';

	return (pointer);
}
