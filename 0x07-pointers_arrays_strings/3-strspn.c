#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: string
 *Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int a = 0;
	unsigned int n = 0;
	unsigned int b;

	while (accept[x])
		x++;

	while (s[a])
	{
		for (b = 0; b < x; b++)
		{
			if (s[a] == accept[b])
				n++;
		}

		if (n > a)
			a++;
		else
			break
	}
	return (n);
}
