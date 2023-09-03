#include "main.h"
/**
 * _strspn - gets span of the prefix substr
 * @a: str scanned
 * @input: str containing char to match
 * Return: span of prefix substr
 */
unsigned int _strspn(char *a, char *input)
{
	int count = 0;
	int x, y;

	while (*a)
	{
		for (x = 0; input[x]; x++)
		{
			y = 0;
			if (*a == input[x])
			{
				count++;
				y = 1;
				break;
			}
		}
		if (!y)
			break;
		a++;
	}
	return (count);
}
