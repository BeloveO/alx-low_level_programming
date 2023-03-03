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
	int i, j;

	int spc[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		for (j = 0; j < 13; j++)
			if (s[i] == spc[j])
			{
				++i;
			       	if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
					continue;
				}
				else
				{
					i++;
					if (s[i] >= 'a' && s[i] <= 'z')
						s[i] = s[i] - 32;
					continue;
				}
			}
	}
	return (s);
}

