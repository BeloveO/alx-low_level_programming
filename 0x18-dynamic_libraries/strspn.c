#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to be checked
 * @accept: prefix to accept
 *
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (k != i)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
	}

	return (k);
}
