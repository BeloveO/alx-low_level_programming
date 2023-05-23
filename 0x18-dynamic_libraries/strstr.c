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
	int i;

	while (!*needle)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}
		haystack++;
	}

	return ('\0');
}
