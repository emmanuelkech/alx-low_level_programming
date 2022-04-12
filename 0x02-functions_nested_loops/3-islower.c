#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: an input character
 *
 * Return: 1 if lowercase || 0 if uppercase
 */

int _islower(int c)
{
	char i;
	int lowcase = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lowcase = 1;
	}
	return (lowcase);
}
