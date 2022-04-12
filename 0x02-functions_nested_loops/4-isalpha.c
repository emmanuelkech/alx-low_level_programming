#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: an input character
 *
 * Return: 1 if letter || 0 if not letter
 */

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}
