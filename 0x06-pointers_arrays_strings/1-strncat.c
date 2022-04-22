#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * _strncat is similar to _strcat except that;
 * it will use at most n bytes from src,
 * src does not need to be null-terminated if it
 * contains n or more bytes.
 *
 * @dest: string to append to and return
 * @src: string to add
 * @n: string length to be added
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;
	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
