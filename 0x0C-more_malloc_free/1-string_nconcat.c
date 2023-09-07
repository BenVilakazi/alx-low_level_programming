#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concat 2 str
 * @a: dest of str
 * @b: src str
 * @n: num of bytes being copied
 * Return: concat str
 */
char *string_nconcat(char *a, char *b, unsigned int n)
{
	unsigned int i, j, size, len1, len2;
	char *ptr;

	if (a == NULL)
		a = "";
	if (b == NULL)
		b = "";
	len1 = _strlen(a);
	len2 = _strlen(b);
	if (n > len2)
		n = len2;
	size = len1 + n;
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = a[i];
	for (j = 0; j < n; j++, i++)
		ptr[i] = b[j];
	ptr[i] = 0;
	return (ptr);
}

/**
 * _strlen - returns strlen
 * @str: str
 * Return: strlen
 */
int _strlen(char *str)
{
	char *p = str;

	while (*str)
		str++;
	return (str - p);
}