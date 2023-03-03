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
	
	if (s[i] == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		s[i] = s[i] - 32;
	i++;
	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spc[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}

