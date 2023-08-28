#include "main.h"
#include <stdio.h>
/**
 * * _strspn - return length of string that matches values consistently
 * * @s: string to search
 * * @accept: target matches
 * * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		z = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				z = 1;
			}
		}
		y = 0;
		if (z == 0)
			break;
		str++;
		x++;
	}
	return (x);
}
