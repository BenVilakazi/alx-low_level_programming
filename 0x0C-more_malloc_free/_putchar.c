#include <unistd.h>
/**
 * _putchar - char a to stdout
 * @a: char to print
 * Return: 1 if successful.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}