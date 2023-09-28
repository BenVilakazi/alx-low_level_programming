#include "main.h"
/**
 * flip_bits - flips bits of a number
 * @m: 2nd number
 * @n: 1st number
 * Return: number of bits to flip
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int result, count = 0;
    result = n ^ m;

    while (result > 0)
    {
        if ((result & 1) == 1)
        count++;

        result = result >> 1;
    }
    return (count);
}