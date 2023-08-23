#include "main.h"
/**
 * string_toupper - changes all lowercase letters to upper
 * @s: str passed
 * Return: capitalized str
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (ptr);
}
