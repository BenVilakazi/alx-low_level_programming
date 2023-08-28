#include "main.h"
/**
 * rev_string - rev a str
 * @s: pointer to str
 * Return: none
 */
void rev_string(char *s)
{
	int i, count;
	char swap;

	if (*s != '\0')
	{
		count = 0;
		while (*(s + count) != '\0')
		{
			count++;
		}
		i = 0;
		count = count - 1;
		while (i <= count)
		{
			swap = *(s + i);
			*(s + i) = *(s + count);
			*(s + count) = swap;
			i++;
			count--;
		}
	}
}
