#include <stdio.h>
#include "main.h"
/**
 * _isalpha - eval alpha char
 * @a: alpha char
 * Return: 1 if a is a letter, else 0
 */
int _isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}
