#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - point of entry
 * Return: 0 (on success)
 */

int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	/* this is my code */
	if (a > 0)
		printf("%i is positive\n", a);
	else if (a == 0)
		printf("%i is zero\n", a);
	else
		printf("%i is negative\n", a);
	return (0);
}
