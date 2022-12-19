#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the parameter, the int
 * Return: the last digit on n.
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i > 0)
		return (i);
	else
		return (-i);
}
