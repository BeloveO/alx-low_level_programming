#include "main.h"
#include <stdllib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: number of bytes
 * Return: array memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
}
