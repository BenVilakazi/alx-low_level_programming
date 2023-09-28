#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: binary number
 * Return: unsigned int number
 **/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int brny = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		brny = 2 * brny + (b[i] - '0');
	}

	return (brny);
}