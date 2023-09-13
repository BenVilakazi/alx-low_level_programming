#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name printed
 * @f: function to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}