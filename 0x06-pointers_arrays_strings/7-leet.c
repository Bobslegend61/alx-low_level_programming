#include "main.h"

/**
 * leet - changes all leet letters to code
 * @s: input string.
 * Return: the pointer to converted string.
 */

char *leet(char *s)
{
	int i = 0, j;
	int codes[5][3] = {
		{97,  65, 52},
		{101, 69, 51},
		{111, 79, 48},
		{116, 84, 55},
		{108, 76, 49}
	};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == codes[j][0] || s[i] == codes[j][1])
			{
				s[i] = codes[j][2];
				break;
			}
		}
		i++;
	}

	return (s);
}
