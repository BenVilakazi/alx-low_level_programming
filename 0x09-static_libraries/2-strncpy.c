#include "main.h"
/**
 * _strncpy - cp a str.
 * @dest: cp dest.
 * @src: cp src.
 * @n: bytes cp'd.
 * Return: cp str
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
