#include "main.h"
/**
 * reverse_array - a function that reverses an array
 * @a: an array of integers
 * @n: number of elements to reverse
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
int i = 0, b;
while (i < n / 2)
{
b = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = b;
i++;
}
}
