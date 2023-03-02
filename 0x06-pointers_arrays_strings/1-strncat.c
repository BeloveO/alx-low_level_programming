#include "main.h"
/**
 * *_strncat - function to concatenate two strings to a certain length
 *
 * @dest: first string
 * @src: second string
 * @n: number to which the second string is copied
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (n--)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	
	return (dest);
}
