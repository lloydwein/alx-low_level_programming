#include <stdio.h>

/**
 * main - enter
 *
 * Description: prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: 0 (on success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
