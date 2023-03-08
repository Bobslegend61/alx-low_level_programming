#include "main.h"

/**
 * _memset - returns a pointer
 * @s: a char
 * @b: a char
 * @n: an integer
 *
 * Return: a char pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
