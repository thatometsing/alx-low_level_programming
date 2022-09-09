#include <stdio.h>

#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char str[27];

	strcpy(str, "abcdefghijklmnopqrstuvwxyz");

	for (i = 0; i < 25; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
