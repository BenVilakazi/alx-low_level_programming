#include <stdio.h>
#include "main.h"
/**
 * main - prints numb of args passed into it.
 * @argc: tye int args
 * @argv: type char argd of str
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
