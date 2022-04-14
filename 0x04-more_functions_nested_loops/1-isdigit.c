#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: input integer
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	int i = 0;
	int isdigit = 0;

	for (; i < 10; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
