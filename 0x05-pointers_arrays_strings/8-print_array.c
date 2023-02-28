#include "main.h"
/**
 *
 */
void print_array(int *a, int n)
{
	int b;

	while (b < n)
	{
		_putchar(a[b]);
		_putchar(',');
		_putchar(' ');
		b++;
	}
}
