#include "main.h"
/**
 * flip_bits - gets number of bits needed to flip to get from number n to m
 * @n: initial number given to be flipped
 * @m: number to be flipped to
 * Return: number of bits needed to flip n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbits = 0, xor;

	xor = n ^ m;
	while (xor)
	{
		if (xor & 1)
			nbits++;
		xor >>= 1;
	}
	return (nbits);
}
