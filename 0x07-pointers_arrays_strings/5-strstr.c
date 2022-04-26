#include "main.h"

/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack.
 * 
 * The terminating null bytes (\0) are not compared
 *
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
