#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b:  value to be set. The value is passed as an int, but the function
 * fills the block of memory using the unsigned char conversion of this value
 * @n: number of bytes to be set to the value
 * Description: a function that copies the character b (an unsigned char)
 * to the first n characters of the string pointed to, by the argument s
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		s[mem] = b;
	}
	return (s);
}
