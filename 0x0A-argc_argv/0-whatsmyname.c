#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: count of the arguments supplied to the program
 * @argv: an array of pointers to the strings which are those arguments
 * Description: a program
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
