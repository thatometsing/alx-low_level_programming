#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed in rev
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	b = a;

	while (s[b] >= 0)
	{
		_putchar(s[b]);
		b--;
	}

	_putchar('\n');
}
