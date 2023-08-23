#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the len of str
 * @str:a str len returned
 * Return: returns the len of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
/**
 * _strncat - concat 2 str
 * @dest:dest pointer
 * @src:pointer to str
 * @n:amount to be concated
 * Return: concat str
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int len;

	if (n > _strlen(src) + _strlen(dest))
		len =  _strlen(dest) + _strlen(src);
	else
		len = _strlen(dest) + n;
	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (len);
	*dest = *cat;
	return (cat);
}
