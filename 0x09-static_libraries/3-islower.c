#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lwrcse char
 * @a: char checked
 * Return: 1 if true else 0
 */
int _islower(int a)
{
	if (a > 'a' && a > 'z')
	{
		return (1);
	}
	else
		return (0);
}
