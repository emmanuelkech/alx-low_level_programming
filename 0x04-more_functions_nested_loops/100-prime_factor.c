#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143,
 * followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long i, num;

	num = 612852475143;

	for (i = 3; i < num; i += 2)
	{
		if (num % i == 0)
		{
			num /= i;
		}
	}
	printf("%ld\n", num);

	return (0);
}
