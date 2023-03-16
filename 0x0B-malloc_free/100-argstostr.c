#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to character array
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
	}
	l++;
	a[l] = '\0';
	return (a);
}
