#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - gives a copy of the string used as parameter
 *
 * @str: string to be copied
 *
 * Return: returns pointer to newly allocated space in memory of string copy
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 1, j;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	copy = malloc((sizeof(char) * i) + 1);

	if (copy == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		copy[j] = str[j];
	
	copy[j] = '\0';

	return (copy);
}
