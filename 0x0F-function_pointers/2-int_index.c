#include "function_pointers.h"
/**
 * int_index - searches for int
 * @array: array searched
 * @size: size of array
 * @cmp: func for comparison
 * Return: 1st index for cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, y;

	if (size > 0 && array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			y = cmp(array[x]);
			if (y)
				break;
		}
		if (x < size)
			return (x);
	}
	return (-1);
}