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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] >= 0 && s[i] < 65 || s[i] > 122 && s[i] < 127)
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
	}
	return (s);
}

