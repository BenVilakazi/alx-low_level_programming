#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for arr
 * @n: num of members
 * @s: num of bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int n, unsigned int s)
{
	void *arr;
	unsigned int b;
	char *a;

	if (n == 0 || s == 0)
		return (NULL);

	arr = malloc(s * n);
	if (arr == NULL)
		return (NULL);

	a = arr;
	for (b = 0; b < n * s; b++)
		a[b] = 0;
	return (arr);
}