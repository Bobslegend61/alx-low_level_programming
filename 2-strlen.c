#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: takes a string
 *
 * Return: int.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
