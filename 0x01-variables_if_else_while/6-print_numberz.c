#include <stdio.h>

/**
 * main - Start - prints base ten without char
 * Return: 0 (End)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
