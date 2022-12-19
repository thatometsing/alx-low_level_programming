#include "main.h"

/**
 * _isalpha - prints 1 if alphabet
 * @c: is the parameter
 * Return: 1 for alphabet 0 for other
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
