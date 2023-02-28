#include "main.h"
/**
 * *_strcpy - copies one script into another
 *
 * @dest: destination script
 * @src: main script to be copied
 *
 * Return: returns the destination script
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';

	return (dest);
}
