#include "main.h"
/**
 * print_number - Funtion to print an integer
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if ((i / 10) > 0)
	{
		_putchar((i / 10) + '0');
	}
	_putchar(i % 10);
}
