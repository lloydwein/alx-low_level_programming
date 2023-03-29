#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * Description: a function that replaces a letter with the 13th letter
 * after it in the alphabet
 * @string: string to be checked
 * Return: encoded string
 */

char *rot13(char *string)
{
	int a;
	int b;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; b < 54; b++)
		{
			if (((string[a] <= 'z' && string[a] >= 'a') || (string[a] <= 'Z' &&
						string[a] >= 'A')) && string[a] == x[b])
			{
				string[a] = y[b];
				break;
			}
		}
	}
	return (string);
}
