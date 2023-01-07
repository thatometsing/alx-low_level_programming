#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: the character
 *Return: pointer to the first occurrence of c in s, NULL if c not found
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0, b;


	while (s[a])
		a++;

	for  (b = 0; b < a; b++)
	{
		if (s[b] == c)
			s += b;
		return (s);
	}
	return ('\0');

}
