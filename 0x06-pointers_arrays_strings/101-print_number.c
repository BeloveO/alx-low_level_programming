#include "main.h"
/**
 * print_number - Funtion to print an integer
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10);
}
