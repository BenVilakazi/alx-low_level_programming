#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks for Alphabetic Character
 * @c: Alphabetic Character
 * Return: (1) if c is a letter, else (0)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
