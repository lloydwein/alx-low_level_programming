#include "main.h"

/**
 * *infinite_add - adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Description: a function
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x = 0;
	int y = 0;
	int a, b, c, d, tmp;
	int num = 0;

	while (n1[x] != '\0')
	{
		x++;
	}
	while (n2[y] != '\0')
	{
		y++;
	}
	for (d = 0; d < y || d < x; d++)
	{
		a = (x - d) > 0 ? (n1[x - d - 1] - '0') : 0;
		b = (y - d) > 0 ? (n2[y - d - 1] - '0') : 0;
		c = a + b + num;
		r[d] = (c % 10) + '0';
		num = c > 9 ? 1 : 0;
	}
	if (num == 1)
	{
		r[d] = '1';
		r[d + 1] = '\0';
	}
	else
	{ r[d] = '\0';
		d--; }
	for (x = 0; x < d + 1; x++)
	{
		for (y = 0; y < (d - 1); y++)
		{
			tmp = r[y + 1];
			r[y + 1] = r[y];
			r[y] = tmp;
		}
	}
	return (d < size_r - 1 ? r : 0);
}
