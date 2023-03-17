#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (on success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
