#include "main.h"
/**
 * _strcmp - function to compare two strings
 *
 * @s1: one of the strings to be compared
 * @s2: second string to be compared
 *
 * Return: 0 if they are equal and another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == 0)
	{
		if (*(s1 + i) != '\0' && *(s2 + i) != '\0')
		{
			j = *(s1 + i) - *(s2 + i);
			i++;
		}
	}

	return (j);
}
