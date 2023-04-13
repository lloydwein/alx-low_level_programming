#include "main.h"

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
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Description: in this function, the returned pointer shall point to a newly
 * allocated space in memory, which contains s1, followed by the first n bytes
 * of s2, and null terminated
 * Return: empty string if NULL is passed, return NULL if fcuntion fails
 * If n is greater or equal to the length of s2 then use the entire string s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int strlng, str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlng = (unsigned int)_strlen(s1);
	pointer = malloc((strlng + n + 1) * sizeof(char));
	if (pointer == NULL)
		return (0);
	for (str1 = 0, str2 = 0; str1 < (strlng + n); str1++)
	{
		if (str1 < strlng)
			pointer[str1] = s1[str1];
		else
			pointer[str1] = s2[str2++];
	}
	pointer[str1] = '\0';
	return (pointer);
}
