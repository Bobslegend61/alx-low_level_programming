#include "function_pointers.h"

/**
 * int_index - searches for an index integer
 * @array: array value to search
 * @size: size of the array
 * @cmp: search function pointer
 *
 * Return: the index of the search in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int res = -1, i;

	if (array && cmp)
	{
		if (!size || size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			{
				res = i;
				break;
			}
	}
	return (res <= 0 ? -1 : res);
}

