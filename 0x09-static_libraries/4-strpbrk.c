#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - byes.
 * @a: pointer to char.
 * @input: pointer to char.
 * Return: NULL.
 */
char *_strpbrk(char *a, char *input)
{
	int b;

	while (*a)
	{
		for (b = 0; input[b]; b++)
		{
			if (*a == input[b])
			{
				return (a);
			}
			a++;
		}
	}
	return (NULL);
}
