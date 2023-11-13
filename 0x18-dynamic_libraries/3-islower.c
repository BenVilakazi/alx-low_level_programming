#include "main.h"
/**
*_islower - This function checks for lowercase character
*@c: this is the character  to be checked
*Return: Always 1 if c is lowercase else 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}