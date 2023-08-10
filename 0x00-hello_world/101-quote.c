#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful"
 *              followed by the author's name and date to the standard error.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
