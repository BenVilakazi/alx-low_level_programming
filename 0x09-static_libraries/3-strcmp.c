#include "main.h"
/**
 * _strcmp - checks 2 str.
 * @a: 1st str
 * @b: 2nd str
 * Return: 1 if true, else 0
 */
int _strcmp(char *a, char *b)
{
	int eq;

	eq = 0;
	while (*a)
	{
		if (*a != *b)
		{
			eq = ((int)*a - 48) - ((int)*b - 48);
		}
		a++;
		b++;
	}
	return (eq);
}
