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


	for  (b = 0; b <= '\0'; b++)
	{
		if (s[b] == c)
		return (&s[b]);
	}
	return ('\0');

}
