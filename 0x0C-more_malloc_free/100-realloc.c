#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block
 * @ptr: pointer
 * @a: bytes allocated
 * @b: size in bytes
 * Return: void
 */
void *_realloc(void *ptr, unsigned int a, unsigned int b)
{
	if (ptr == NULL)
	{
		ptr = malloc(b);
		return (ptr);
	}
	if (b == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (b == a)
		return (ptr);
	free(ptr);
	ptr = malloc(b);
	return (ptr);
}