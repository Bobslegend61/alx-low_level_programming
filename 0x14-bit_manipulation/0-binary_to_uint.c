#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int
 * @b: Pointer to the binary characters
 *
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b < '0' || *b > '1')
			return (0);
		m = (m << 1) | (*b - '0');
		b++;
	}
	return (m);
}
