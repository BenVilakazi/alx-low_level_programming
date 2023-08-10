#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program calculates and prints the size of various data types in bytes.
 * It uses the sizeof operator to determine the size of each data type.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	// Print the size of a char
	printf("Size of a char: %i byte(s)\n", sizeof(char));

	// Print the size of an int
	printf("Size of an int: %i byte(s)\n", sizeof(int));

	// Print the size of a long int
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));

	// Print the size of a long long int
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));

	// Print the size of a float
	printf("Size of a float: %i byte(s)\n", sizeof(float));

	return (0);
}

