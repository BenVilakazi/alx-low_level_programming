#include "main.h"
/**
 * _puts - prints a str, followed ny newline
 * @str: points to str
 * Return: nan
 */
void _puts(char *str)
{
	int a;

	a = 0;
	if (*str != '\0')
	{
		while (*(str + a) != '\0')
		{
			_putchar(*(str + a));
			a++;
		}
	}
	_putchar('\n');
}
