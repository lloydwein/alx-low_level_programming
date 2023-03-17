#include <stdio.h>

/**
 * main - point of entry
 *
 * Description:  prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (on success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
