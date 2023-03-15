#include "main.h"
#include <stdlib.h>
/**
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
		j = 0;
	}
	a = malloc((sizeof(char) * k) + ac + 1);

	for (i = 0; av[i]; i++)
	{
		while (av[i][j])
		{
			a[l] = av[i][j];
			l++;
			j++;
		}
		a[l] = '\n';

		j = 0;
		l++;
		i++;
	}
	l++;
	a[l] = '\0';
	return (a);
}
