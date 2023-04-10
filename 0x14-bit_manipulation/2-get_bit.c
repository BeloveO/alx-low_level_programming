#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: inputted number
 * @index: index of the bit
 * Return: the value of bit at index or -1 if an error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int new;

	if (n != NULL)
	{
		new = (n >> index) & 1;
		return (new);
	}

	return (-1);
}
