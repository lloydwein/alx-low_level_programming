#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied
 * Description: a function that copies n bytes from memory area src
 * to memory area dest. The memory areas must not overlap
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}
	return (dest);
}
