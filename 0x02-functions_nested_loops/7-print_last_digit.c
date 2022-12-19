#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the parameter, the int
 * Return: the last digit on n.
 */

int print_last_digit(int n)
{
	int i;

	if (n > 0)
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = -1 * (n % 10);
		_putchar(i + '0');
		return (-i);
	}
}
