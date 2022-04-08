#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	char low[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');

	return (0);
}
