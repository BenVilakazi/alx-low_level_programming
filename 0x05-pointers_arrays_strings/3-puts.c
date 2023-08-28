#include "main.h"
/**
 * _puts - prints a str,follow by newline
 * @str: pointer to str to print
 * Return: null
 */
void _puts(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
