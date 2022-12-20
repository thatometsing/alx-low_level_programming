#include "main.h"

/**
 * _strlen - declares the length of a string
 * @s: string to be checked
 * Return: a
 */

int _strlen(char *s)
{
	int a = 0;


	for (; *s++;)
		a++;
	return (a);
}
