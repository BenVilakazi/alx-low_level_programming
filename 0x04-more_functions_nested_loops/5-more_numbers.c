#include "main.h"
/**
 * more_numbers - outter loop prints val 0 to 9, innerloop prints from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
}
