#include "main.h"
/**
 * *_strncpy - function to copy the contents of one string to another
 *
 * @dest: string to be copied into
 * @src: string to be copied
 * @n: the number the string will be copied to
 *
 * Return: returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
