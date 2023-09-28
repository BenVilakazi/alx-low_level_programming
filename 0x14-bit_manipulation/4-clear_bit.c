#include "main.h"
/**
 * clear_bit - clear a index bit to 1
 * @index: index to search
 * @n: pointer to n
 * Return: 1 worked / -1 failed
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
    int auxiliar = *n;

    if (index > 32)
    return (-1);

    auxiliar = auxiliar & (~(1 << index));
    *n = auxiliar;

    return (1);
}