#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concat all args.
 * @a: argc.
 * @b: argv.
 * Return: pointer to arr of char.
 */
char *argstostr(int a, char **b)
{
	char *ao;
	int x, y, z, ai;

	if (a == 0)
		return (NULL);
	for (x = y = 0; y < a; y++)
	{
		if (b[y] == NULL)
			return (NULL);
		for (z = 0; b[y][z] != '\0'
				x++;
			x++;
	}
	ao = malloc((x + 1) * sizeof(char));
	if (ao == NULL)
	{
		free(ao);
		return (NULL);
	}
	for (y = z = ai = 0; ai < x; z++, ai++)
	{
		if (b[y][z] == '\0')
		{
			ao[ai] = '\n';
			y++;
			ai++;
			z = 0;
		}
		if (ai < x - 1)
			ao[ai] = b[y][z];
	}
	ao[ai] = '\0';
	return (ao);
}
