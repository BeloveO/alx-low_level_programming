#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary given
 * Return: converted number (success) or 0 (failure)
 *	if b is NULL or contains non binary
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, count = 1;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
		;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		sum += (b[len] - 48) * count;
		count *= 2;
	}
	return (sum);
}
