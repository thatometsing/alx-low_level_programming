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

	for (i = 0; i < 10; i++)
		putchar(i);

	for (i = 97; i < 102; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
