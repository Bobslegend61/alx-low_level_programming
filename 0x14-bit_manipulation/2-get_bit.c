#include "main.h"

/**
 * get_bit - Return value of a bit at given index
 * @n: Bits to check
 * @index: Index to return
 *
 * Return: The bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int s = sizeof(unsigned long int);

	if (index < 0 || index > ((s * 8) - 1))
		return (-1);
	return ((n >> index) & 1);
}
