#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * Numbers must be separated by comma, followed by space
 *
 * Numbers must be shown in same order as  stored in array
 *
 * @a: input array
 * @n: number of elements of the array to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
