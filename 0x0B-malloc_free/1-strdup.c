#include "main.h"
#include <stdlib.h>
/**
 * _strlen - prints strlen;
 * @str: pointer to len;
 * Return: strlen;
 */
int _strlen(char *str)
{
	unsigned int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * _strdup - pointer to allocated memory
 * @str: str copied
 * Return: copied str
 */
char *_strdup(char *str)
{
	char *copy;
	char *_copy;

	if (!str)
		return (NULL);
	copy = malloc((_strlen(str) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	_copy = copy;
	while (*str)
	{
		*_copy = *str;
		_copy++;
		str++;
	}
	*_copy = '\0';
	return (copy);
}
