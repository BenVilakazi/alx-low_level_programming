#include "main.h"
/**
 * swap_int - switches the val of 2 int
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}

/**
 * reverse_array - reverses the objects in an array of int
 * @a: array of int
 * @n: num of ojects
 */
void reverse_array(int *a, int n)
{
	int counter = 0;

	while (counter < n / 2)
	{
		swap_int(a + counter, a + (n - counter - 1));
		counter++;
	}
}


