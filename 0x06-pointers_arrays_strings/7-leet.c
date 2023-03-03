#include "main.h"
/**
 * *leet - function to encode some characters
 *
 * @s: string to be encoded
 *
 * Return: returns the encoded character
 */
char *leet(char *s)
{
	int i = 0, j;
	int ll[] = {'a', 'e', 'o', 't', 'l'};
	int ul[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ll[j] || s[i] == ul[j])
			{
				s[i] = num[j];
				break;
			}
		}
		i++;
	}
	
	return (s);
}
