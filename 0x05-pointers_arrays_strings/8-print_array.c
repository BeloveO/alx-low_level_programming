#include "main.h"
#include <stdio.h>
/**
 * print_array - prints arrays
 *
 * @a: array to be printed
 * @n: number of elements in array
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}
