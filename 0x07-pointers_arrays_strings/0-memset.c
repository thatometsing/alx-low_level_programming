#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: points to memory area in question
 * @b: constant byte
 * @n: number of first bytes in the memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0, a < n, a++)
		s[a] = b;

	return (s);
}
