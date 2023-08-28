#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks for lowercase Characters
 * @c: the character to che
 * Return: (1) if c is lowercase, else return (0)
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
		return (0);
}
