#include "main.h"
/**
 * reverse_array - function to reverse the content of an array
 *
 * @a: array to be rearranged
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
