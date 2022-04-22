#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * letters a and A are replaced by 4
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaced by 7
 * letters l and L are replaced by 1
 *
 * @str: string to be encoded
 *
 * Return: augmented string str
 */

char *leet(char *str)
{
	int i, j;

	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (str[i] == arr1[j])
				str[i] = arr2[j];
		}
	}

	return (str);
}
