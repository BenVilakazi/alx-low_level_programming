#include "main.h"
/**
 * _strlen - prints strlen
 * @a: pointer used
 * Return: counter
 */
int _strlen(char *a)
{
	int counter;

		counter = 0;
		while (*a)
		{
			counter += 1;
			a += 1;
		}
		return (counter);
}
