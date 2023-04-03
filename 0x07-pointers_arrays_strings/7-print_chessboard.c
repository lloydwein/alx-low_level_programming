#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * Description: a function that prints a 8x8 chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int side1;
	int side2;

	for (side1 = 0; side1 < 8; side1++)
	{
		for (side2 = 0; side2 < 8; side2++)
		{
			_putchar(a[side1][side2]);
		}
		_putchar('\n');
	}
}
