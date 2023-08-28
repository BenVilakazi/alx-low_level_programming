#include "main.h"
/**
 * puts2 - prints 1 out of 2 chars in a str,then a newline
 * @str: pointer-str-print
 * Return: null
 */
void puts2(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while (*(str + i) != '\0')
		{
			if (i % 2 == 0)
				_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
