#include <stdio.h>
/**
 * main - prints "Fizz" for digits divisible by 3,
 * prints "Buzz" for digits divisible by 5,
 * prints "FizzBuzz" for digits divisible by 3 and 5
 * for digits from 1-100
 * Return: (0) indicates successful execution;
 */
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);
	}
	printf("Buzz\n");
	return (0);
}
