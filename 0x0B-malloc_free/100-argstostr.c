#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Description: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int arg1, arg2, arg3 = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (0);
	for (arg1 = 0; arg1 < ac; arg1++)
	{
		for (arg2 = 0; av[arg1][arg2] != '\0'; arg2++)
		{
			length++;
		}
		length++;
	}

	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (0);

	arg3 = 0;
	for (arg1 = 0; arg1 < ac; arg1++)
	{
		for (arg2 = 0; av[arg1][arg2] != '\0'; arg2++)
		{
			string[arg3] = av[arg1][arg2];
			arg3++;
		}
		string[arg3] = '\n';
		arg3++;
	}
	return (string);
}
