#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * The function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @s: empty string
 * @b: is the constant byte
 * @n: number of bytes to fill
 *
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}

	return (s);
}
