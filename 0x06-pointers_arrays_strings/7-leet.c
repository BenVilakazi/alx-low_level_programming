#include "main.h"
/**
 * leet - encodes a str into 1337
 * @c: str
 * Return:encoded str
 */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + val[i];
			}
		}
		c++;
	}
	return (cp);
}
