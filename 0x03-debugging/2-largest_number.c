#include "main.h"
/**
 * largest_number - returns the largest of 3 num
 * @x: 1st int
 * @y: 2nd int
 * @z: 3rd int
 * Return: largest num
 */
int largest_number(int x, int y, int z)
{
	int largest;

	if (x >= y && x >= z)
	{
		largest = x;
	}
	else if (y >= x && y >= z)
	{
		largest = y;
	}
	else
	{
		largest = z;
	}
	return (largest);
}
