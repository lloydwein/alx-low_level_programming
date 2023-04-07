#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: main C string to be scanned
 * @needle: small string to be searched with-in haystack string
 * Description: a function that finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes (aq\0aq)
 * are not compared.
 * Return: pointer to the beginning of the substring, or NULL
 * if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int str1, str2 = 0;
	int sack;
	char *tmp;

	tmp = haystack;
	for (str1 = 0; haystack[str1] != '\0'; str1++)
	{
		if (needle[0] == haystack[str1])
		{
			sack = 1;
			for (str2 = 1; needle[str2] != '\0' && sack == 1; str2++)
			{
				if (needle[str2] == haystack[str1 + str2])
				{
				}
				else
				{
					sack = 0;
				}
			}
		}
		if (needle[str2] == '\0')
		{
			return (tmp);
		}
		tmp++;
	}
	return (0);
}
