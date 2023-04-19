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
		puts("Error");
		exit(1);
	}
	
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		puts("Error");
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
		printf("%02x ", *((unsigned char *)(main + number)));
	}
	putchar('\n');
	return (0);
}
