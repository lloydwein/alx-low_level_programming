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
	short byte, number;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (byte == 0)
	{
		putchar('\n');
		return (0);
	}
	printf("%02x ", *((unsigned char *)(main)));
	for (number = 0; number < byte; ++number)
	{
		printf(" %02x", *((unsigned char *)(main + number)));
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
