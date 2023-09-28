#include "main.h"
/**
 * get_bit - gets the bit on index
 * @index: index to search
 * @n: number given
 * Return: bit on that index
 **/
int get_bit(unsigned long int n, unsigned int index)
{
    int nbit;

    if (index > 64)
    return (-1);
    /* Right shift num, n times and perform bitwise AND with 1 */
    nbit = (n >> index) & 1;
    return (nbit);
}