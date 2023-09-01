#include "main.h"
#include <stdio.h>
/**
 * main - prints the num of args entered
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
