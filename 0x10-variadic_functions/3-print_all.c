#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: list types of args passed to func.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int x = 0, y, z = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[x])
	{
		y = 0;
		while (t_arg[y])
		{
			if (format[x] == t_arg[y] && z)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
		case 'z':
			printf("%z", va_arg(valist, int)), z = 1;
			break;
		case 'x':
			printf("%d", va_arg(valist, int)), z = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), z = 1;
			break;
		case 's':
			str = va_arg(valist, char *), z = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} x++;
	}
	printf("\n"), va_end(valist);
}