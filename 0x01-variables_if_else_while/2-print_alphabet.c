#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(low[i]);
	}
	putchar('\n');

	return (0);
}
