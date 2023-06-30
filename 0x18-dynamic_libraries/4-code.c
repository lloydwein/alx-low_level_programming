#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied
 * Description: a function that copies n bytes from memory area src
 * to memory area dest. The memory areas must not overlap
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}
	return (dest);
}

/**
 * *_strchr - locates a character in a string.
 * @s: C string to be scanned
 * @c: character to be searched in s
 * Description: a function that returns a pointer to the first occurrence
 * of the character c in the string s
 * Return: pointer to the matched character or NULL if the character is not
 * found
 */

char *_strchr(char *s, char c)
{
	char *pointer;

	pointer = s;
	while (*pointer != c)
	{
		if (*pointer == 0)
		{
			return (0);
		}
		pointer++;
	}
	return (pointer);
}

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
	unsigned int num = 0;

	while (*s)
	{
		for (string = 0; accept[string]; string++)
		{
			if (*s == accept[string])
			{
				num++;
				break;
			}
			else if (accept[string + 1] == '\0')
			{
				return (num);
			}
		}
		s++;
	}
	return (num);
}

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: C string to be scanned
 * @accept: C string containing the characters to match
 * Description: a function that locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int byte;

	while (*s)
	{
		for (byte = 0; accept[byte]; byte++)
		{
			if (*s == accept[byte])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

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
