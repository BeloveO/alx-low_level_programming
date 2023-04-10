#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: given input
 * @index: index of bit to be set to 0
 * Return: 1 (success) or -1 (failure)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & ~(1 << index));

	return (1);
}
