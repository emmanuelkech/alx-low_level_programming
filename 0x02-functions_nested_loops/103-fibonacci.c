#include <stdio.h>

/**
 * main - finds and prints the sum of the
 * even-valued terms, followed by a new line.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
			sum += fibonacci[i];
	}
	printf("%ld\n", sum);

	return (0);
}
