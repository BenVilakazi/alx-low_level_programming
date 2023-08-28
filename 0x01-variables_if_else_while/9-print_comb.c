#include <stdio.h>

/**
* main - prints all possible combinations of single-digit num
* Return: 0 (Success)
**/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
