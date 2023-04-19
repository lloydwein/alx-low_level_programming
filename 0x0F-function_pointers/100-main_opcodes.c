#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argumenet vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int byte, number;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	byte = atoi(argv[number]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	system("gcc 100-main_opcodes.c -c");
	system("objdump -D 100-main_opcodes.o");
	return (0);
}
