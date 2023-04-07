#include "main.h"

/**
 * is_integer - checks if string is an integer
 * @s: string to be checked
 * Return: 0 0r 1
 */

int is_integer(const char *s)
{
	int num = 0;

	while (s[num] != '\0')
	{
		if (s[num] < '0' || s[num] > '9')
		{
			return (1);
		}
		num++;
	}
	return (0);
}

/**
 * main - adds positive numbers.
 * @argc:  count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Description: a program
 * Return: always 0
 */

int main(int argc, char const *argv[])
{
	int add = 0;

	while (--argc)
	{
		if (is_integer(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[argc]);
	}
	printf("%i\n", add);
	return (0);
}
