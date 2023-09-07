#include <stdlib.h>
#include "main.h"
/**
 * array_range - an arrof int
 * @min: start int
 * @max: end int
 * Return: arrof int
 */
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
