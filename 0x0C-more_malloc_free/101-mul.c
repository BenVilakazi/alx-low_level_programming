#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - checks str
 * @a: str evaluated
 * Return: 0 success, else 1
 */
int is_digit(char *a)
{
	int b = 0;

	while (a[b])
	{
		if (a[b] < '0' || a[b] > '9')
			return (0);
		b++;
	}
	return (1);
}
/**
 * _strlen - returns strlen
 * @s: str evaluated
 * Return: strlen
 */
int _strlen(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		b++;
	}
	return (b);
}
/**
 * errors - error handling
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - product of 2 num
 * @argc: argc
 * @argv: argv
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *a1, *a2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	a1 = argv[1], a2 = argv[2];
	if (argc != 3 || !is_digit(a1) || !is_digit(a2))
		errors();
	len1 = _strlen(a1);
	len2 = _strlen(a2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (b = 0; b <= len1 + len2; b++)
		result[b] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(a2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (b = 0; b < len - 1; b++)
	{
		if (result[b])
			a = 1;
		if (a)
			_putchar(result[b] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
