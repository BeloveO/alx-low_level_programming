#include "main.h"
/**
 * print_line - prints an underscore a certain number of times
 *
 * @n: the number of times underscore is printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		n--;
	}
	else
		_putchar('\n');
}
