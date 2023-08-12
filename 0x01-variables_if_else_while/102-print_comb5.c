#include <stdio.h>

/**
 * main - (Start) returns every combination of 2 & 2 digits
 * Return: 0 (Success execution)
 */
int main(void)
{
	int i, j, k, h;

	i = 0;
	j = i;
	while (i < 10)
	{
		while (j < 10)
		{
			k = i;
			h = j + 1;
			while (k < 10)
			{
				while (h < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(h + '0');
					if ((i == 9) && (j == 8) && (k == 9) && (h == 9))
						;
					else
					{
						putchar(',');
						putchar(' ');
					}
					h++;
				}
				h = 0;
				k++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);

