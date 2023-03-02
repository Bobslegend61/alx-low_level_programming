#include "main.h"

/**
 * _strncat - Return a pointer to the resulting string dest
 * @dest: a destructured string
 * @src: string to be added to dest
 * @n: uses at most n bytes from src
 *
 * Return: a pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
int len, i;

len = 0;

while (dest[len] != '\0')
len++;

for (i = 0; i < n && src[i] != '\0'; i++)
{

dest[len + i] = src[i];

}

dest[len + i] = '\0';

return (dest);
}
