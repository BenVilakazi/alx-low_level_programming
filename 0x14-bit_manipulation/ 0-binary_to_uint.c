#include "holberton.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: binary number
 * Return: unsigned int number
 **/
unsigned int binary_to_uint(const char *b)
{
int result = 0, i = 0, pow = 1;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
i++;
}
i--;

while (i >= 0)
{
if (b[i] != '0' && b[i] != '1')
return (0);

result += (b[i] - 48) * pow;

pow *= 2;
i--;
}
return (result);
}