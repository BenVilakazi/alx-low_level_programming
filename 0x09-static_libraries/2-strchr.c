#include <stdio.h>
#include "main.h"
/**
 * _strchr - finds a char in a str
 * @a: searchable str
 * @b: target char
 * Return: pointer to 1st occurance of a else NULL
 */
char *_strchr(char *a, char b)
{
	while (*a)
	{
		if (b == *a)
		{
			return (a);
		}
			a++;
		}
		if (!b)
			return (a);
		return (NULL);
}
