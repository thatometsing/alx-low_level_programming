#include "main.h"

/**
 * print_sign - prints the sign of the integer
 * @n: is the parameter
 * Return: 1 for positive, 0 for 0, -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else (n < 0)
        {
		_putchar('-');
		return (-1);
	}
}
