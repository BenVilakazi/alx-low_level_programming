#include <stdio.h>
#include "main.h"
/**
 * main - prints all args received.
 * @argc: type int args
 * @argv: type char args of str.
 * Return: none
 */
int main(int argc, char **argv)
{
	/*Declaring var*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print each args*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
