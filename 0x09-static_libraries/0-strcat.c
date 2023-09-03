#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns len of a str
 * @str:strlen returned
 * Return: returns strlen
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
 * _strcat - concat 2 str.
 * @dest:dest pointer.
 * @src:pointer 2 str.
 * Return: concat str.
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
