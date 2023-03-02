#include "main.h"

/**
 * _strcat - returns a pointer
 * @dest: a destructured string
 * @src: string to be added to dest
 *
 * Return: a pointer.
 */

char *_strcat(char *dest, char *src)
{
int len, len2, len3, i;

len = 0, len2 = 0;

while (dest[len] != 0)
len++;

while (src[len2] != 0)
len2++;

for (i = 0; i <= len2; i++)

{

dest[len + i] = src[i];

}

len3 = len + len2 + 1;

dest[len3] = 0;

return (dest);
}
