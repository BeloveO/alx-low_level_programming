#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings to the nth number
 * @s1: string
 * @s2: string
 * @n: number of bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, k, l, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		k = i + j;
	else
		k = i + n;
	a = malloc((sizeof(char) * k) + 1);

	if (a == NULL)
		return (NULL);
	l = 0;
	for (m = 0; m < k; m++)
	{
		if (m <= i)
			a[m] = s1[m];
		if (m >= i)
		{
			a[m] = s2[l];
			l++;
		}
	}
	a[m] = '\0';
	return (a);
}
