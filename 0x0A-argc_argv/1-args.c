#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments
 * Description: a program
 * Return: always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
