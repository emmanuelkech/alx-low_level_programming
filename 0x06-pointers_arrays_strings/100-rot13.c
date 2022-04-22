#include "main.h"

/**
 * rot13 - encodes a string using rot13 i.e move 13 spaces
 *
 * @str: string to be encoded
 *
 * Return: encoded string str
 */

char *rot13(char *str)
{
	int i, j;
	char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 52; ++j)
		{
			if (str[i] == arr1[j])
			{
				str[i] = arr2[j];
				break;
			}
		}
	}

	return (str);
}
