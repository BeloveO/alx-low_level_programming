#include "main.h"
/**
 * *cap_string - funtion to capitalize words of a string
 *
 * @s: string to be capitalized
 *
 * Return: returns the modified string
 */
char *cap_string(char *s)
{
	int i = 0, j;

	int spc[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, '{', '}'};

	while (s[i])
	{
		j = 0;

		while (j < 13)
		{
			if ((i == 0 || s[i - 1] == spc[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;

			j++;
		}
		i++;
	}
	return (s);
}

