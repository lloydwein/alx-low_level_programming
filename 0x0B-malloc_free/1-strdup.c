#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 *  @str: string to duplicate
 *  Description: this function returns a pointer to a new string which is a
 *  duplicate of the string str. Memory for the new string is obtained with
 *  malloc, and can be freed with free
 *  Returns NULL if str = NULL
 *  Return: pointer to the duplicated string on success
 *  returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *string;
	unsigned int num, length;

	num = 0;
	length = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[length])
	{
		length++;
	}

	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
	{
		return (0);
	}
	while ((string[num] = str[num]) != '\0')
	{
		num++;
	}
	return (string);
}
