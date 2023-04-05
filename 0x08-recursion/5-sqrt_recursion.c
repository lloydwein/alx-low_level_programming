#include "main.h"

/**
 * _sqrt - finds the square root recursion
 * @num: integer
 * @sq: square root
 * Return: square root
 */

int _sqrt(int num, int sq)
{
	if (sq * sq == num)
	{
		return (sq);
	}
	else if (sq * sq < num)
	{
		return (_sqrt(num, sq + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: floating point value
 * Description: returns the nonnegative square root of n
 * Return: square root of n
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
