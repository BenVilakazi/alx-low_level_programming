#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a str
 * @str: returns the length of a str
 * Return: returns length of str
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
 * _strcat - concat two str
 * @dest:destination pointer
 * @src:pointer to str
 * Return: concat str
 */

char *_strcat(char *dest, char *src)
{
	char *cat = dest + _strlen(dest);
	int len =  _strlen(dest) + _strlen(src);

	while (*src)
	{
		*cat += *src;
		src++;
		cat++;
	}
	*cat += '\0';
	cat -= (len);
	*dest = *cat;
	return (cat);
}
