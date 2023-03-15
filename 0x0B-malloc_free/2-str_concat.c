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
	int a, i = 1, j = 1, k;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	k = i + j;

	s = malloc((sizeof(char) * k) + 1);

	for (a = 0; a < s1[i]; a++)
		s[a] = s1[a];
	for (a = 0; a < s2[j]; a++)
		s[i + a] = s2[a];

	s[k - 1] = '\0';

	return (s);
}
