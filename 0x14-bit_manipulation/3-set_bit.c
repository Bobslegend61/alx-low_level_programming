#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1
 * @n: pointer to the number
 * @index: Index of the bit
 *
 * Return: bit val
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int);
	unsigned int i;

	if (index > ((size * 8) - 1))
		return (-1);
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
