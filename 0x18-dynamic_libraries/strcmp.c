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
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
