#include "main.h"
/**
 * *rot13 - function to encode strings using rot13
 *
 * @s: string to be encoded
 *
 * Return: returns encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
		{
			if ((s[i] > 109 && s[i] < 123) || (s[i] > 77 && s[i] < 91))
			{
				s[i] -= 13;
				break;
			}
			s[i] += 13;
			break;
		}
		i++;
	}

	return (s);
}
