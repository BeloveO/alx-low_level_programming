#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: second string
 * Return: returns concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int a, i = 0, j = 0, k;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	k = i + j;

	s = malloc((sizeof(char) * k) + 1);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	j = 0;

	for (a = 0; a < k; a++)
	{
		if (a <= i)
			s[a] = s1[a];
		if (a > i)
		{
			s[a] = s2[j];
			j++;
		}
	}

	s[a] = '\0';

	return (s);
}
