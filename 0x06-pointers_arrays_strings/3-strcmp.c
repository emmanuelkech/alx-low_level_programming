#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: 0 if equal, or else +ve/-ve number
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; ++i)
		;

	return (s1[i] - s2[i]);
}
