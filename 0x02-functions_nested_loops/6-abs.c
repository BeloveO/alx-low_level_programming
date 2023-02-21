#include "main.h"
/**
 * _abs - to check for the absolute integer of input
 *
 * @a: input to be checked
 *
 * Return: always 0 (success)
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = ((-1) * a);
		_putchar(a);
	}
	else
		_putchar(a);
	
	return (0);
}
