#include "main.h"

/**
 * _islower - prints 1 if lowercase and o if uppercase
 * c: is the parameter
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
