#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last Index of a Number
 * @a: the int to return the last index from num
 * Return: value of the last index
 */
int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		a = -a;
		i = a % 10;
	}
	else
	{
		i = a % 10;
	}
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
