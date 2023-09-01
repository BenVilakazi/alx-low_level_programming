#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char **argv)
{
	int x, y, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	diff = x * y;

	printf("%i\n", diff);

	return (0);
}
