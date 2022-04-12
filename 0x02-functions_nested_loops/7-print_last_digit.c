#include "main.h"

/**
 * print_last_digit - prints the last tigit of a number
 *
 * @n: an entry character
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		i = -1 * (n % 10);
	else
		i = n % 10;
	_putchar((i % 10) + '0');

	return (i % 10);
}
