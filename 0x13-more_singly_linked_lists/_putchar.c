#include <unistd.h>
/**
 * _putchar - writes char to stdout
 * @c: char printed
 * Return: On success 1. else 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}