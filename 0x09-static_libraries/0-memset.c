#include "main.h"
/**
 * _memset - fills memory with a const byte.
 * @a:memory dest pointed to by a.
 * @b: the const byte b.
 * @n: the 1st n bytes.
 * Return: pointer to memory dest.
 */
char *_memset(char *a, char b, unsigned int n)
{
		unsigned int x = 0;

		for (x; x < n; x++)
		{
			*(a + x) = b;
		}
		return (a);
}
