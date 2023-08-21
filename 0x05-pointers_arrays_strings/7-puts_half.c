#include "main.h"
/**
 * puts_half - devide str & prints 2nd half of the str
 * @str: pointer 2 str
 * Return: null
 */
void puts_half(char *str)
{
	int i, length, half;

	if (*str != '\0')
	{
		length = 0;
		while (*(str + length) != '\0')
		{
			length++;
		}
		if (length % 2 == 0)
			half = length / 2;
		else
			half = length - (length - 1) / 2;
		i = half;
		if (length == 1)
			_putchar(*str);
		else
		{
			while (*(str + i) != '\0')
			{
				_putchar(*(str + i));
				i++;
			}
		}
	}
	_putchar('\n');
}
