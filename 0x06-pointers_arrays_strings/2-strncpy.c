#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: string copy destination and what is returned
 * @src: string to be copied
 * @n: number of places to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for (; i < n; ++i)
		dest[i] = '\0';

	return (dest);
}
