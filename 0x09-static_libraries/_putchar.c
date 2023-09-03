#include <unistd.h>
/**
 * _putchar - writes char a to stdout.
 * @a: char printed.
 * Return: 1 for successful execution else 0
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
