#include "main.h"
#include <stdlib.h>
/**
 * create_array - return array of char.
 * @a: char to fill arr.
 * @s: arr size
 * Return: str of char.
 */
char *create_array(char a, unsigned int s)
{
	unsigned int b;
	char *ptr;
	unsigned int b;

	ptr = malloc(s * sizeof(char));
	if (s == 0 || !ptr)
		return ('\0');
	for (b = 0; b < s; b++)
		ptr[b] = a;
	return (ptr);
}
