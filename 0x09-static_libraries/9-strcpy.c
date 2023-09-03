#include "main.h"
/**
 * _strcpy - cp str with \0 to buffer.
 * @dest: pointer to dest.
 * @src: pointer to str.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (*(src + b) != '\0')
	{
		*(dest + b) = *(src + b);
		b++;
	}
	*(dest + b) = '\0';
	return (dest);
}
