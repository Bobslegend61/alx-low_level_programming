#include "main.h"

/**
 * cap_string - changes all first letters to uppercase after delimeter
 * @s: input string.
 * Return: the pointer to converted string.
 */

char *cap_string(char *s)
{
	int i = 0, j;
	int delimeter[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		for (j = 0; j <= 13; j++)
		{
			if (i == 0)
			{
				if (s[i] >= 97 && s[i] <= 122)
					s[i] -= 32;
				break;
			}
			else if (s[i] == delimeter[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
				break;
			}
		}
		i++;
	}

	return (s);
}
