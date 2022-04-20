#include "main.h"

/**
 * puts_half - prints second half of a string,
 * followed by new line.
 *
 * If the number of characters is odd, the function
 * should print the last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: input string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len, temp;

	for (i = 0; str[i] != '\0'; ++i)
		;

	temp = len = i;
	if (temp % 2 == 0)
		temp /= 2;
	else
		temp = (temp + 1) / 2;

	for (i = temp; i < len; ++i)
		_putchar(str[i]);

	_putchar('\n');
}
