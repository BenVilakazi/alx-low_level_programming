#include "main.h"
/**
 * print_numbers - for loop prints val 0-9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + 48);
	_putchar('\n');
}
