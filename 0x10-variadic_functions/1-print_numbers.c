#include "variadic_functions.h"
/**
 * print_numbers - prints num and newline
 * @separator: a pointer to str printed between 2 num
 * @n: num of int passed to function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	va_start(valist, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(valist, int));
		if (x != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}