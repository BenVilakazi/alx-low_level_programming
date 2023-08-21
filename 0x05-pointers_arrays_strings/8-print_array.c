#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n objects of an array,then a newline
 * @a: array of ints
 * @n: num of objects in array
 * Return: null
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	putchar('\n');
}
