#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: inputted number
 * @index: index of bit to set to 1
 * Return: 1 if it worked or -1 if an error occurs
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	
	*n = (*n | (1 << index));

	return (1);
}
