#include "main.h"
/**
 * _strncpy - duplicates a str
 * @dest: duplicates destination
 * @src: duplicate source
 * @n: bytes to be duplicated
 * Return: duplicated str
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
		*dest++ = *src++;
	if (!*src)
		while (*dest && n--)
			*dest++ = 0;
	return (ptr);
}
