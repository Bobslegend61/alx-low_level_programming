#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int
 * @b: Pointer to the binary characters
 *
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;

	while (*b)
	{
		if (*b < '0' || *b > '1')
		{
			ans = 0;
			break;
		}
		ans = (ans << 1) | (*b - 48);
		b += 1;
	}
	return (ans);
}
