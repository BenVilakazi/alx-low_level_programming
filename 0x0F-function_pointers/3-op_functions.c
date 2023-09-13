#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sum to var
 * @a: int to sum
 * @b: int to sum
 * Return: sum of int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subt a from b
 * @a: int to check
 * @b: subtract
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product a and b
 * @a: 1st num
 * @b: 2nd num
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two num
 * @a: num to div
 * @b: num div
 * Return: res of div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo of a div
 * @a: 1st num
 * @b: 2nd num
 * Return: modulo of the div
 */
int op_mod(int a, int b)
{
	return (a % b);
}