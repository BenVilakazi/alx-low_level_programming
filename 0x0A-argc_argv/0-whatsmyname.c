#include <stdio.h>
#include "main.h"
/**
 * main - prints name followed by newline.
 * @argc: type int args
 * @argv: type char args of str.
 * Return: none
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
