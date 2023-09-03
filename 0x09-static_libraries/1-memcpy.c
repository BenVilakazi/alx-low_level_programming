#include "main.h"
/**
 * _memcpy - func copies from memory src to memory src.
 * @dest: memory location.
 * @src: memory copied.
 * @n: number of bytes.
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
