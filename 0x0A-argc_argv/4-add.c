#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints all args entered.
 * @argc: type int args
 * @argv: type char args of str.
 * Return: if not entered 2 args, return error
 */
int main(int argc, char *argv[])
	{
		int i, j, sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);

		return (0);
}
