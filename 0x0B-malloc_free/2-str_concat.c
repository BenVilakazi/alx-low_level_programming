#include "main.h"
#include <stdlib.h>
/**
 * _strlen - returns strlen
 * @a: char str
 * Return: strlen
 */
int _strlen(char *a)
{
	unsigned int b = 0;

	while (a[b] != '\0')
	{
		b++;
	}
	return (b);
}
/**
 * str_concat - concat 2 str
 * @a: 1st str
 * @b: 2nd str
 * Return: concatenated string
 */
char *str_concat(char *a, char *b)
{
	char *cp;
	char *_cp;

	if (a == NULL)
		a = "";
	if (b == NULL)
		b = "";
	cp = malloc(sizeof(char) * (_strlen(a) + _strlen(b)) + 1);
	if (!copy)
		return (NULL);
	_cp = cp;
	while (*s1)
	{
		*_cp = *a;
		_cp++;
		a++;
	}
	while (*b)
	{
		*_cp = *b;
		_cp++;
		b++;
	}
	*_cp = '\0';
	return (cp);
}

