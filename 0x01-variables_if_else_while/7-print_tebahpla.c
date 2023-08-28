#include <stdio.h>

/**
* main - (Start) prints alphabets in lowercas in reverse order
* Return: 0 (End)
**/

int main(void)
{
	char l_letter = 122;

	while (l_letter >= 97)
	{
		putchar(l_letter);
		l_letter--;
	}
	putchar('\n');
	return (0);
}
