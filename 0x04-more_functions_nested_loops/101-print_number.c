#include "main.h"
/**
 * print_number - returns an int using putchar
 * @n: return an int
 * return: nothing
 */
void print_number(int n)
{
	int div, last_digit, tmp, lenght;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar('-');
		last_digit = last_digit * (-1);
	}
	n = (n / 10);
	if (n < 0)
	{
		n = n * (-1);
	}
	lenght  = 0;
	div = 1;
	tmp = n;
	while (tmp > 0)
	{
		lenght += 1;
		div *= 10;
		tmp = tmp / 10;
	}
	div = div / 10;
	while (div >= 1)
	{
		_putchar(n / div + '0');
		n = n % div;
		div /= 10;
	}
	_putchar(last_digit + '0');
}
