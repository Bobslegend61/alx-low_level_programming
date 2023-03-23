#include "function_pointers.h"

/**
 * array_iterator - execute func on array.
 * @array: array to be executed on.
 * @size: size of the array.
 * @action: func to execute on array.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        size_t i;

        if (array && action)
                for (i = 0; i < size; i++)
                        action(*(array + i));
}
