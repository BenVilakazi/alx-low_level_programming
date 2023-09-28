#include "main.h"
/**
 * print_binary - prints a binaty num
 * @n: num to convert
 * Return: void
 **/
void print_binary(unsigned long int n)
{
    int i = 0;
    unsigned long int auxiliar, auxiliar2 = n;

    /* if n is 0 0r 1 print */
    if (n < 2)
    {
        _putchar((n & 1) + '0');
        return;
    }
    /* count number of bit in the integer n */
    while (auxiliar2 > 0)
    {
        auxiliar2 = auxiliar2 >> 1;
        i++;
    }
    while (i > 0)
    {
        i--;
        auxiliar = n >> i;
        /* (aux1 & 1) is equal to (aux1 % 2) */
        _putchar((auxiliar & 1) + '0');
    }
}