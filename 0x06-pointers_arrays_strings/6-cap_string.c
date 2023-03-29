#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * Description: a function that converts initial charcater of a string
 * to upper case
 * @string: string to be uppercased
 * Return: uppercased string
 */

char *cap_string(char *string)
{
	int x = 0;

	while (string[x] != '\0')
	{
		if (string[0] <= 122 && string[0] >= 97)
		{
			string[0] = string[0] - 32;
		}

		if (string[x] == 32 || string[x] == 44 || string[x] == 46 ||
				string[x] == 59 || string[x] == '\t' ||
				string[x] == '\n' || string[x] == '!' ||
				string[x] == '?' || string[x] == '(' ||
				string[x] == ')' || string[x] == '{' ||
				string[x] == '}')
		{
			if (string[x + 1] <= 122 && string[x + 1] >= 97)
			{
				string[x + 1] = string[x + 1] - 32;
			}
		}
		x++;
	}
	return (string);
}
