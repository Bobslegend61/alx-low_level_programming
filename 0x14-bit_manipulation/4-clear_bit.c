#include "main.h"

/**
 * clear_bit - Sets bit value to 0
 * @n: Integer whose bit value to manipulate
 * @index: Position of bit to manipulate
 *
 * Return: 1 if worked, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s = sizeof(unsigned long int);
	unsigned long int m;

	if (index < 0 || index > ((s * 8) - 1))
		return (-1);
	m = ((*n >> index) & 1);
	if (m == 1)
		m = (1 << index);
	else
		m = (0 << index);
	*n = (*n ^ m);
	return (1);
}
