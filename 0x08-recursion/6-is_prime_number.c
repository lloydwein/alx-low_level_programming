#include "main.h"

/**
 * division - divides numerator by denominator
 * @num: numerator
 * @denom: denominator
 * Return: integer
 */

int division(int num, int denom)
{
	if (denom >= num && num > 1)
	{
		return (1);
	}
	else if (num % denom == 0 || num <= 1)
	{
		return (0);
	}
	else
	{
		return (division(num, denom + 1));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return o
 * @n: number to check
 * Description: A prime number is defined as a natural number greater than 1
 * and is divisible by only 1 and itself. In other words, the prime number
 * is a positive integer greater than 1 that has xactly two factors
 * 1 and the number itself. First few prime numbers are 2, 3, 5, 7, 11, 13, 17
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (division(n, 2));
}
