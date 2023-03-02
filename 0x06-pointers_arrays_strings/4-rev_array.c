#include "main.h"
/**
 * reverse_array - function to reverse the content of an array
 *
 * @a: array to be rearranged
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int b[n], i;

	for (i = 0; i < n; i++)
		b[n - 1 - i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = b[i];
}
