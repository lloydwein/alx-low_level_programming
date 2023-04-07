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
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Description: a program
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int num = 0;
	int mincoin = 0;
	int money = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (is_integer(argv[1]))
	{
		num = atoi(argv[1]);
		while (num > 0 && money <= 4)
		{
			if (num >= coins[money])
			{
				num -= coins[money];
				mincoin++;
			}
			else
			{
				money++;
			}
		}
	}
	printf("%i\n", mincoin);
	return (0);
}
