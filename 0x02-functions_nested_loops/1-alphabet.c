#include "main.h"

/**
 * print_alphabet - prints all alphabet then a new line
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);

	_putchar('\n');
}
