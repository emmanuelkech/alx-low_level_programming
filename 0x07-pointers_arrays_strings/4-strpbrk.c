#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 *
 * @s: string to search for
 * @accept: string to search in
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if byte isn't found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; ++i)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		++s;
	}

	return (0);
}
