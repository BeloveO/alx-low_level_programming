#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: the minimum number
 * @max: the maximum number in the array
 * Return: the integer array
 */
int *array_range(int min, int max)
{
	int i;
	char *a;

	if (min > max)
		return (NULL);
	a = malloc(max - min);

	if (a == NULL)
		return (NULL);
	for (min; min <= max; min++)
	{
		a[i] = min;
		i++;
	}
	return (a);
}
