#include "main.h"

/**
 * flip_bits - flip bit
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	while (m || n)
	{
		if ((m & 1) != (n & 1))
			c++;
		m >>= 1;
		n >>= 1;
	}
	return (c);
}
