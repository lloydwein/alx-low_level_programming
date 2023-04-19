#include "3-calc.h"

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
