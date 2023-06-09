#include "3-calc.h"

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int (*hold)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
		printf("Error\n"), exit(100);
	hold = get_op_func(argv[2]);
	if (hold == NULL || argv[2][1] != '\0')
		printf("Error\n"), exit(99);
	printf("%d\n", ((*hold)(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
