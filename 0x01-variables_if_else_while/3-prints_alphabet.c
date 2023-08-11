#include <stdio.h>

/**
* main - prints alphabet in lowercase, then in uppercase
* Return: 0 successful execution
**/

int main(void)
{
	char l_letter;
	char u_letter;

	for (l_letter = 97; l_letter <= 122; l_letter++)
	{
		putchar(l_letter);
	}

	for (u_letter = 'A'; u_letter <= 'Z'; u_letter++)
	{
		putchar(u_letter);
	}
	putchar('\n');

	return (0);
}
