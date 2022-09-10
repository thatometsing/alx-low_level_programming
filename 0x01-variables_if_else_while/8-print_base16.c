#include <stdio.h>

#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
		putchar(j + '0');

	for (i = 97; i < 103; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
