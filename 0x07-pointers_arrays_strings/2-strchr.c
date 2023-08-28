#include "main.h"
#include <stdio.h>
/**
  * _strchr - locate 1st occurrence of char in string and returns pointer there
  * @s: string to search
  * @c: target characer
  * Return: pointer to that character in string
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
