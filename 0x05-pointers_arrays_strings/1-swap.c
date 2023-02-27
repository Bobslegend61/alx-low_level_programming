#include "main.h"
#include <stdio.h>

/**
 * swap_int - takes two variables and swaps them
 * @a: pointer address to var a
 * @b: pointer address to var b
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
