#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 *
 * @a: the matrix given
 * @size: the number of arrays contained in the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i][i];
		sum2 = sum2 + a[i][size - i - 1];
	}

	printf("%d, %d\n", sum1, sum2);
}
