#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _isdigit - checks if char is digit
 * @y: char checked
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int y)
{
	return (y >= '0' && y <= '9');
}
/**
 * _strlen - returns strlen of y
 * @b: strlen checked
 * Return: int strlen
 */
int _strlen(char *b)
{
	int i = 0;

	while (*b++)
		i++;
	return (i);
}
/**
 * big_multiply - multiply two str
 * @a1: 1st num str
 * @a2: 2nd num str
 * Return: product of num str
 */
char *big_multiply(char *a1, char *a2)
{
	char *r;
	int l1, l2, y, b, y, x;

	l1 = _strlen(a1);
	l2 = _strlen(a2);
	r = malloc(y = x = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (y--)
		r[y] = 0;
	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(a1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		y = a1[l1] - '0';
		y = 0;
		for (l2 = _strlen(a2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(a2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = a2[l2] - '0';
			y += r[l1 + l2 + 1] + (y * b);
			r[l1 + l2 + 1] = y % 10;
			y /= 10;
		}
		if (y)
			r[l1 + l2 + 1] += y;
	}
	return (r);
}
/**
 * main - multiply two str
 * @argc: argsc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *r;
	int y, y, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	y = 0;
	y = 0;
	while (y < x)
	{
		if (r[y])
			y = 1;
		if (y)
			_putchar(r[y] + '0');
		y++;
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}