#include <unistd.h>
/**
   * _putchar - writes the char c to stdout
   * @c: print char
   * Return: 1 = success.
   * On error, -1
*/
int _putchar(char c)
{
		return (write(1, &c, 1));
}
