#include <stdio.h>

/**
 * main - point of entry
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 * print all the letters except q and e
 *
 * Return: 0 (on success)
 */

int main(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}
