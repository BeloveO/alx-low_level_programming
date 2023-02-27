#include "main.h"
/**
 * swap_int - swapping the values of two pointers
 *
 * @a: a value to be switched
 * @b: a value to be switched
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
