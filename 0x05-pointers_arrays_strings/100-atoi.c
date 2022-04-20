#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: pointer to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int i = 0;
	int j = 1;
	int k = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			j *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			k = 1;
			i = (i * 10) + (s[c] - '0');
			c++;
		}

		if (k == 1)
		{
			break;
		}
		c++;
	}
	i *= j;

	return (i);
}
