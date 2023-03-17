#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0 (on success)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
