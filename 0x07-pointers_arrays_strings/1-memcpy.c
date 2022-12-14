#include "main.h"

/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@n: nuber of bytes
 *@src: memory area copied from
 *@dest: memory area copied to
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
