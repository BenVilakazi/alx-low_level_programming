#include "main.h"
/**
 * swap_int - reverses the value of *a to *b & *b to *a
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
