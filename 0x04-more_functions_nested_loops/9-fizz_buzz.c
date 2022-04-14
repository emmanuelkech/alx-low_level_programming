#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line
 *
 * But for multiples of 3 print Fizz instead
 * of the number, and for multiples of 5 print Buzz
 *
 * For numbers which are multiples of both 3 and 5,
 * print Fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);

	}
	printf("Buzz\n");

	return (0);
}
