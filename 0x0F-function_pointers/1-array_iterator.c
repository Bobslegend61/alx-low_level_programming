#include "function_pointers.h"

/**
 * array_iterator - execute func on array.
 * @array: array to be executed on.
 * @size: size of the array.
 * @action: func to execute on array.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

        if (array && size && action)
                for (i = 0; i < size; i++)
                        action(*(array + i));
}
