#include "main.h"
#include <stdio.h>
/**
 * * _strpbrk - return pointer to byte in s that matches a byte in accept
 * * @s: string to search
 * * @accept: target matches
 * * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}
