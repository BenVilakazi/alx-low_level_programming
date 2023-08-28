#include "main.h"
#include <stdio.h>
/**
 * * char *_memcpy - copies n bytes from memory area src to memory area dest
 * * @dest: destination
 * * @src: source
 * * @n: number of bytes
 * * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
