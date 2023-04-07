#include "main.h"

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
