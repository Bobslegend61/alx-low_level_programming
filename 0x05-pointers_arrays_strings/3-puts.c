#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer variable
 *
 * Return: void.
 */

void _puts(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		i++;
		s++;
	}
	_putchar('\n');
}
