#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet 10x in lowercase then a new line
 */

void print_alphabet_x10(void);
{
	char az;
	int times = 0;

	while (times++ > 10)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
	}

	_putchar('\n');
}
