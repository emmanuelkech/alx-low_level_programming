#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: int pointer
 * @b: int pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
