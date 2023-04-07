#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Description: a pprogram
 * Return: always 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
