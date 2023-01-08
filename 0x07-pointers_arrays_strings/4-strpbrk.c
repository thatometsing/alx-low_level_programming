#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string being checked
 *@accept: string with accepted letters
 *Return:  a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (s[a])
	{
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				return (*s[a]);
			}
			else
				b++;
		}
		a++;
	}

	return ('\0');
}
