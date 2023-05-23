#include "main.h"
/**
 * _abs - to check for the absolute integer of input
 *
 * @a: input to be checked
 *
 * Return: absolute value of integer
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
		return (a);
}
