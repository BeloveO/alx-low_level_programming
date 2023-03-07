#include "main.h"
/**
 * *_strstr - function that locates a substring
 *
 * @haystack: string to be checked
 * @needle: string being looked for
 *
 * Return: the occurence of the needle in the stack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (haystack[i]);
		}
	}

	return ('\0');
}
