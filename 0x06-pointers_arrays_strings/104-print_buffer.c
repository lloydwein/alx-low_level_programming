#include "main.h"

/**
 * print_buffer - prints a buffer
 * Description: unction must print the content of size bytes of the buffer
 * pointed by b
 * @b: pointer
 * @size: byte size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x;
	int y;
	int num;
	int tmp = 0;

	for (x = 0; x < size; x = x + 10)
	{
		printf("%08x: ", tmp);
		for (num = tmp; num < (tmp + 10); num += 2)
		{
			if (num == size - 1)
				printf("%02x ", b[num]);
			else if (num < size)
				printf("%02x%02x ", b[num], b[num + 1]);
			else
				printf("    ");
		}
		for (y = x; y < x + 10; y++)
		{
			if (b[y] < 32 || b[y] > 126)
				b[y] = '.';
			if (y < size)
				printf("%c", b[y]);
		}
		printf("\n");
		tmp += 10;
	}
	if (size <= 0)
		printf("\n");
}
