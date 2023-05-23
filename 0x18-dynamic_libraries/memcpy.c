#include "main.h"
/**
 * *_memcpy - function that copies memory area
 *
 * @dest: new copy destination
 * @src: source of copy
 * @n: number of elements to be copied
 *
 * Return: new copied file (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}